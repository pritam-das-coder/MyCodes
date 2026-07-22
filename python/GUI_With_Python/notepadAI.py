from tkinter import *
from tkinter import ttk  # Import ttk for the Notebook (Tabs)
import tkinter.messagebox as tmsg
from tkinter.filedialog import askopenfilename, asksaveasfilename
import os

# Dictionary to keep track of file paths for each tab
# Key: The Tab Object (Frame), Value: The File Path
file_paths = {}

def create_tab(content="", title="Untitled"):
    """Creates a new tab with a Text widget and Scrollbar"""
    # Create a Frame to hold the Text and Scrollbar for this tab
    tab_frame = Frame(notebook)
    
    # Add the frame to the notebook
    notebook.add(tab_frame, text=title)
    
    # Create Scrollbar specific to this tab
    scroll = Scrollbar(tab_frame)
    scroll.pack(side="right", fill="y")
    
    # Create Text Widget specific to this tab
    text_area = Text(tab_frame, yscrollcommand=scroll.set, undo=True, font="lucida 16")
    text_area.pack(fill="both", expand=1)
    text_area.insert("1.0", content)
    
    scroll.config(command=text_area.yview)
    
    # Register this tab in our file_paths dictionary (initially None for new files)
    # We use the tab_frame ID as the key
    file_paths[str(tab_frame)] = None
    
    # Select the new tab
    notebook.select(tab_frame)
    return text_area, tab_frame

def get_active_text_widget():
    """Returns the Text widget of the currently selected tab"""
    # Get the name of the currently selected tab frame
    current_tab_id = notebook.select()
    if not current_tab_id:
        return None
    # Use generic tkinter method to find the widget from the ID
    current_tab = root.nametowidget(current_tab_id)
    
    # The Text widget is inside this frame (it's the first child that is a Text widget)
    for widget in current_tab.winfo_children():
        if isinstance(widget, Text):
            return widget
    return None

def newFile():
    create_tab()

def openFile():
    file = askopenfilename(defaultextension=".txt",
                           filetypes=[("All Files", "*.*"), ("Text Documents", "*.txt")])
    if file:
        root.title(os.path.basename(file) + " - Notepad")
        f = open(file, "r")
        content = f.read()
        f.close()
        
        # Create a new tab with the file content
        _, tab_frame = create_tab(content, os.path.basename(file))
        
        # Save the path in our dictionary
        file_paths[str(tab_frame)] = file

def saveFile():
    # Get current tab ID
    current_tab_id = notebook.select()
    if not current_tab_id:
        return

    text_widget = get_active_text_widget()
    file_path = file_paths.get(current_tab_id)

    if file_path is None:
        # If no file path exists for this tab, perform "Save As"
        saveAsFile()
    else:
        # Save to existing path
        f = open(file_path, "w")
        f.write(text_widget.get("1.0", "end"))
        f.close()
        print("File Saved")

def saveAsFile():
    current_tab_id = notebook.select()
    if not current_tab_id:
        return

    text_widget = get_active_text_widget()
    
    file = asksaveasfilename(initialfile='Untitled.txt', defaultextension=".txt",
                             filetypes=[('All Files', '*.*'), ('Text Documents', '*.txt')])
    
    if file:
        f = open(file, "w")
        f.write(text_widget.get("1.0", "end"))
        f.close()
        
        # Update title of the specific tab
        notebook.tab(current_tab_id, text=os.path.basename(file))
        
        # Update the dictionary
        file_paths[current_tab_id] = file
        root.title(os.path.basename(file) + " - Notepad")

def closeTab():
    """Closes the currently active tab"""
    current_tab_id = notebook.select()
    if current_tab_id:
        notebook.forget(current_tab_id)
        if current_tab_id in file_paths:
            del file_paths[current_tab_id]

# Edit Menu Functions (Updated to target active widget)
def cut():
    w = get_active_text_widget()
    if w: w.event_generate("<<Cut>>")

def copy():
    w = get_active_text_widget()
    if w: w.event_generate("<<Copy>>")

def paste():
    w = get_active_text_widget()
    if w: w.event_generate("<<Paste>>")

def undo():
    w = get_active_text_widget()
    if w: w.event_generate("<<Undo>>")

def select_all():
    w = get_active_text_widget()
    if w: w.event_generate("<<SelectAll>>")

def about():
    tmsg.showinfo("About Notepad", "Created by Pritam Das")

# --- GUI SETUP ---
root = Tk()
root.geometry("600x450")
root.title("Notepad with Tabs")
# Note: I commented out the icon line so it runs without needing your specific .ico file
# root.wm_iconbitmap(r"path_to_your_icon.ico") 

# --- MENU SETUP ---
mainmenu = Menu(root)
root.config(menu=mainmenu)

m1 = Menu(mainmenu, tearoff=0)
m1.add_command(label="New Tab", command=newFile) # Renamed to New Tab
m1.add_command(label="Open", command=openFile)
m1.add_command(label="Save", command=saveFile)
m1.add_command(label="Save As", command=saveAsFile)
m1.add_separator()
m1.add_command(label="Close Tab", command=closeTab) # Added Close Tab
m1.add_command(label="Exit", command=root.destroy)
mainmenu.add_cascade(label="File", menu=m1)

m2 = Menu(mainmenu, tearoff=0)
m2.add_command(label="Undo", command=undo)
m2.add_separator()
m2.add_command(label="Cut", command=cut)
m2.add_command(label="Copy", command=copy)
m2.add_command(label="Paste", command=paste)
m2.add_separator()
m2.add_command(label="Select All", command=select_all)
mainmenu.add_cascade(label="Edit", menu=m2)

m3 = Menu(mainmenu, tearoff=0)
m3.add_command(label="About Notepad", command=about)
mainmenu.add_cascade(label="Help", menu=m3)

# --- NOTEBOOK SETUP ---
# Replaces the single 'body' text widget
notebook = ttk.Notebook(root)
notebook.pack(pady=0, fill="both", expand=True)

# Create an initial empty tab
create_tab()

# --- STATUS BAR (simplified) ---
# Note: StatusBar logic is complex with tabs because you need to bind events to 
# every new text widget. I've included the visual layout but removed the variable logic 
# to keep the code stable.
statusBar = Frame(root)
statusBar.pack(side="bottom", fill="x")
Label(statusBar, text="Tabbed Notepad Active").pack(side="left")

root.mainloop()