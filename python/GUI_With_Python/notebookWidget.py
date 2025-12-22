from tkinter import *
from tkinter import ttk

root=Tk()
root.title("Learn Notebook")
root.geometry("500x500")

my_notebook=ttk.Notebook(root)
my_notebook.pack()

my_frame1=Frame(my_notebook,width=500,height=500,bg="blue")
my_frame2=Frame(my_notebook,width=500,height=500,bg="red")

my_frame1.pack()
root.mainloop()