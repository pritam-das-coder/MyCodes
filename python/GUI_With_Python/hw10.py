from tkinter import *

def name():
    print("Pritam Das")

def course():
    print("B.Tech CSE")

def year():
    print("2nd Year")

def hobby():
    print("Coding")

root=Tk()
root.geometry("400x300")

f=Frame(root,borderwidth=8,relief=RIDGE,bg="grey")
f.pack(side="left",anchor="nw")

b1=Button(f,text="Name",command=name)
b1.pack(side="left",padx=10)

b2=Button(f,text="Course",command=course)
b2.pack(side="left",padx=10)

b3=Button(f,text="Year",command=year)
b3.pack(side="left",padx=10)

b4=Button(f,text="Hobby",command=hobby)
b4.pack(side="left",padx=10)

root.mainloop()