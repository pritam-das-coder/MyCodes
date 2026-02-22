import tkinter as tk
from tkinter import ttk, filedialog, messagebox
import os

class TextEditor:
    def __init__(self, root):
        self.root = root
        self.root.title("My Text Editor")
        self.root.geometry("900x600")
        self.root.wm_iconbitmap(r"C:\Users\daspr\OneDrive\Desktop\MyCodes\python\GUI_With_Python\notepad.ico")

        # Track theme state (True = Dark, False = Light)
        self.is_dark_mode = False
        self.tab_files = {} # Key: Tab Widget, Value: File Path

        # 1. Define Styles (for Notebook/Tabs)
        self.style = ttk.Style()
        self.style.theme_use('clam') 

        # 2. Create the Menu Bar
        self.menu_bar = tk.Menu(self.root)
        self.root.config(menu=self.menu_bar)

        # File Menu
        self.file_menu = tk.Menu(self.menu_bar, tearoff=0)
        self.menu_bar.add_cascade(label="File", menu=self.file_menu)
        self.file_menu.add_command(label="New Tab", command=self.new_file)
        self.file_menu.add_command(label="Open...", command=self.open_file)
        self.file_menu.add_command(label="Save", command=self.save_file)
        self.file_menu.add_command(label="Save As...", command=self.save_as_file)
        self.file_menu.add_command(label="Close Tab", command=self.close_current_tab)
        self.file_menu.add_separator()
        self.file_menu.add_command(label="Exit", command=self.exit_editor)

        # Edit Menu
        self.edit_menu = tk.Menu(self.menu_bar, tearoff=0)
        self.menu_bar.add_cascade(label="Edit", menu=self.edit_menu)
        
        # Cut, Copy, Paste
        self.edit_menu.add_command(label="Cut", command=lambda: self.safe_edit_action("<<Cut>>"))
        self.edit_menu.add_command(label="Copy", command=lambda: self.safe_edit_action("<<Copy>>"))
        self.edit_menu.add_command(label="Paste", command=lambda: self.safe_edit_action("<<Paste>>"))
        
        self.edit_menu.add_separator()
        
        # Undo, Redo
        self.edit_menu.add_command(label="Undo", command=lambda: self.safe_edit_action("<<Undo>>"))
        self.edit_menu.add_command(label="Redo", command=lambda: self.safe_edit_action("<<Redo>>"))

        # View Menu
        self.view_menu = tk.Menu(self.menu_bar, tearoff=0)
        self.menu_bar.add_cascade(label="View", menu=self.view_menu)
        self.view_menu.add_command(label="Toggle Dark/Light Mode", command=self.toggle_theme)

        # Help Menu
        self.help_menu = tk.Menu(self.menu_bar, tearoff=0)
        self.menu_bar.add_cascade(label="Help", menu=self.help_menu)
        self.help_menu.add_command(label="About", command=self.show_about)

        # 3. Create the Notebook (Tab Container)
        self.notebook = ttk.Notebook(self.root)
        self.notebook.pack(fill="both", expand=True)
        self.notebook.bind("<<NotebookTabChanged>>", self.on_tab_change)

        # 4. Create Status Bar
        self.status_bar = tk.Label(self.root, text="Ready", anchor="w", relief=tk.SUNKEN, bd=1)
        self.status_bar.pack(side="bottom", fill="x")

        # Initialize with Light Mode colors
        self.apply_theme()
        
        # Create the first empty tab
        self.new_file()

    # Wrapper for Edit Actions
    def safe_edit_action(self, event_name):
        """Safely triggers an event on the active text widget."""
        widget = self.get_active_text_widget()
        if widget:
            try:
                widget.event_generate(event_name)
            except tk.TclError:
                # This catches errors if undo stack is empty
                pass

    # Theme Logic

    def toggle_theme(self):
        self.is_dark_mode = not self.is_dark_mode
        self.apply_theme()

    def apply_theme(self):
        if self.is_dark_mode:
            # Dark Mode
            bg_main = "#2b2b2b"
            fg_main = "#ffffff"
            bg_text = "#1e1e1e"
            fg_text = "#d4d4d4"
            cursor_col = "#ffffff"
            
            self.root.config(bg=bg_main)
            self.status_bar.config(bg=bg_main, fg=fg_main)
            self.style.configure("TNotebook", background=bg_main)
            self.style.configure("TNotebook.Tab", background="#3c3c3c", foreground="white")
            self.style.map("TNotebook.Tab", background=[("selected", "#1e1e1e")])
            
            for tab_frame in self.notebook.winfo_children():
                tab_frame.config(bg=bg_main)
                for child in tab_frame.winfo_children():
                    if isinstance(child, tk.Text):
                        child.config(bg=bg_text, fg=fg_text, insertbackground=cursor_col)
        else:
            # Light Mode
            bg_main = "#f0f0f0"
            fg_main = "#000000"
            bg_text = "#ffffff"
            fg_text = "#000000"
            cursor_col = "#000000"

            self.root.config(bg=bg_main)
            self.status_bar.config(bg=bg_main, fg=fg_main)
            self.style.configure("TNotebook", background=bg_main)
            self.style.configure("TNotebook.Tab", background="#e1e1e1", foreground="black")
            self.style.map("TNotebook.Tab", background=[("selected", "#ffffff")])
            
            for tab_frame in self.notebook.winfo_children():
                tab_frame.config(bg=bg_main)
                for child in tab_frame.winfo_children():
                    if isinstance(child, tk.Text):
                        child.config(bg=bg_text, fg=fg_text, insertbackground=cursor_col)

    # --- Helper Functions ---

    def create_tab(self, title="Untitled", content=""):
        frame = tk.Frame(self.notebook)
        scrollbar = tk.Scrollbar(frame)
        scrollbar.pack(side="right", fill="y")
        
        # undo=True is CRITICAL for Undo/Redo to work
        text_area = tk.Text(frame, wrap="word", undo=True, yscrollcommand=scrollbar.set)
        text_area.insert(1.0, content)
        text_area.pack(fill="both", expand=True, side="left")
        
        scrollbar.config(command=text_area.yview)
        
        self.notebook.add(frame, text=title)
        self.notebook.select(frame)
        self.tab_files[frame] = None
        
        self.apply_theme()
        return frame, text_area

    def get_active_tab(self):
        if not self.notebook.tabs(): return None
        tab_name = self.notebook.select()
        return self.notebook.nametowidget(tab_name)

    def get_active_text_widget(self):
        active_tab = self.get_active_tab()
        if not active_tab: return None
        for child in active_tab.winfo_children():
            if isinstance(child, tk.Text):
                return child
        return None

    def on_tab_change(self, event):
        active_tab = self.get_active_tab()
        if active_tab:
            file_path = self.tab_files.get(active_tab)
            self.status_bar.config(text=f"Editing: {file_path if file_path else 'Untitled'}")

    # --- File Functions ---

    def new_file(self):
        self.create_tab()
        self.status_bar.config(text="New Tab Created")

    def open_file(self):
        file_path = filedialog.askopenfilename(defaultextension=".txt",
                                               filetypes=[("Text Files", "*.txt"), ("All Files", "*.*")])
        if file_path:
            try:
                with open(file_path, "r") as file:
                    content = file.read()
                title = os.path.basename(file_path)
                frame, _ = self.create_tab(title, content)
                self.tab_files[frame] = file_path
                self.status_bar.config(text=f"Opened: {file_path}")
            except Exception as e:
                messagebox.showerror("Error", f"Could not open file: {e}")

    def save_file(self):
        active_tab = self.get_active_tab()
        text_widget = self.get_active_text_widget()
        if not active_tab or not text_widget: return

        file_path = self.tab_files.get(active_tab)
        if file_path:
            try:
                with open(file_path, "w") as file:
                    file.write(text_widget.get(1.0, tk.END))
                self.status_bar.config(text=f"Saved: {file_path}")
            except Exception as e:
                messagebox.showerror("Error", f"Could not save file: {e}")
        else:
            self.save_as_file()

    def save_as_file(self):
        active_tab = self.get_active_tab()
        text_widget = self.get_active_text_widget()
        if not active_tab or not text_widget: return

        file_path = filedialog.asksaveasfilename(defaultextension=".txt",
                                                 filetypes=[("Text Files", "*.txt"), ("All Files", "*.*")])
        if file_path:
            try:
                with open(file_path, "w") as file:
                    file.write(text_widget.get(1.0, tk.END))
                self.tab_files[active_tab] = file_path
                self.notebook.tab(active_tab, text=os.path.basename(file_path))
                self.status_bar.config(text=f"Saved: {file_path}")
            except Exception as e:
                messagebox.showerror("Error", f"Could not save file: {e}")

    def close_current_tab(self):
        active_tab = self.get_active_tab()
        if active_tab:
            self.notebook.forget(active_tab)
            if active_tab in self.tab_files:
                del self.tab_files[active_tab]
            if not self.notebook.tabs():
                self.create_tab()

    def exit_editor(self):
        if messagebox.askyesno("Exit", "Are you sure you want to exit?"):
            self.root.destroy()

    def show_about(self):
        messagebox.showinfo("About", "Python Text Editor GUI\nBuilt by Pritam Das")

if __name__ == "__main__":
    root = tk.Tk()
    app = TextEditor(root)
    root.mainloop()