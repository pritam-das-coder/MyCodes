from tkinter import *

root=Tk()
root.geometry("655x333")
f1=Frame(root,bg="grey",borderwidth=6,relief=SUNKEN)
f1.pack(side="left", fill=Y)

l1=Label(f1, text="Project")
l1.pack(pady=142)

root.mainloop()