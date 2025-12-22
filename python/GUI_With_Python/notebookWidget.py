from tkinter import *
from tkinter import ttk

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

root.mainloop()