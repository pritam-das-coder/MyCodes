from tkinter import *

root=Tk()
root.geometry("655x333")

f1=Frame(root,bg="grey",borderwidth=6,relief=SUNKEN)
f1.pack(side="left", fill=Y,pady=100)

f2=Frame(root,bg="grey",borderwidth=8,relief=SUNKEN)
f2.pack(side="top",fill=X)

l1=Label(f1, text="Project Hi \nHello")
l1.pack(pady=150)

l2=Label(f2,text="Welcome",font="Helvetica 16 bold",fg="red")
l2.pack()

root.mainloop()