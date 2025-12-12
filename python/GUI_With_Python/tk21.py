from tkinter import *

root=Tk()
root.geometry("700x400")
root.title("Learn Radiobutton")

Label(root,text="What would you like to have sir?",font="lucida 19 bold").pack()

var=IntVar()

Radiobutton(root,text="Dosa",variable=var,value=1).pack()
Radiobutton(root,text="Idly",variable=var,value=2).pack()
Radiobutton(root,text="Roti",variable=var,value=3).pack()
Radiobutton(root,text="Fish",variable=var,value=4).pack()

root.mainloop()