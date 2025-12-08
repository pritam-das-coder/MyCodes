from tkinter import *

root=Tk()
root.geometry("600x300")
root.title("Learn Tkinter Events")

wid=Text(root,height=5,width=20)
wid.insert("1.0","Hi hello bye")
wid.pack()

root.mainloop()