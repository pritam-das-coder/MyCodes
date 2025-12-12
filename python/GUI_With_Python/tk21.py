from tkinter import *

root=Tk()
root.geometry("700x400")
root.title("Learn Radiobutton")

Label(root,text="What would you like to have sir?",font="lucida 19 bold").pack()

var=IntVar()

Radiobutton(root,text="Dosa",variable=var,value=1).pack()

root.mainloop()