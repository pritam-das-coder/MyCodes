from tkinter import *

def fun(event):
    print("You clicked on the button")
root=Tk()
root.geometry("600x300")
root.title("Learn Tkinter Events")

widget=Button(root,text="Click me")
widget.pack()

widget.bind('<Button-1>',fun)
root.mainloop()