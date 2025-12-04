from tkinter import *

def hello():
    print("Hello from tkinter")

def name():
    print("My name is Pritam")

root=Tk()
root.geometry("655x333")

f=Frame(root,bg="grey",borderwidth=6,relief=SUNKEN)
f.pack(side="left", anchor="nw")

b1=Button(f,fg="red",text="Print Now",command=hello)
b1.pack(side="left")

b2=Button(f,fg="red",text="Tell me name",command=name)
b2.pack(side="left",padx=16)

b3=Button(f,fg="red",text="Print Now")
b3.pack(side="left")

b4=Button(f,fg="red",text="Print Now")
b4.pack(side="left")

root.mainloop()