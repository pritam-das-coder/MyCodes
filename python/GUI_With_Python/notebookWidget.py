from tkinter import *
from tkinter import ttk

def hide():
    my_notebook.hide(1) # tab index starts from 0

def show():
    my_notebook.add(my_frame2,text="Red Tab")

def select():
    my_notebook.select(1)

root=Tk()
root.title("Learn Notebook")
root.geometry("500x500")

my_notebook=ttk.Notebook(root)
my_notebook.pack(fill="both",expand=True)

my_frame1=Frame(my_notebook,width=500,height=500,bg="blue")
my_frame2=Frame(my_notebook,width=500,height=500,bg="red")

my_frame1.pack(fill="both",expand=True)
my_frame2.pack(fill="both",expand=True)

my_notebook.add(my_frame1,text="Blue Tab")
my_notebook.add(my_frame2,text="Red Tab")

Button(my_frame1,text="Hide Tab 2",command=hide).pack(pady=15)

Button(my_frame1,text="Show Tab 2",command=show).pack(pady=15)

Button(my_frame1,text="Navigate to Tab 2",command=select).pack(pady=15)

root.mainloop()