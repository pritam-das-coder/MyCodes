from tkinter import *
import tkinter.messagebox as tmsg

def fun():
    print("Coding is fun")

def help():
    print("I will help you")
    a=tmsg.showinfo("Help","Pritam will help you")
    print(a)

def rate():
    print("Rate us")
    tmsg.askquestion("How was your experience?","How was your experience?")
    
root=Tk()
root.geometry("700x350")

mainmenu = Menu(root)
root.config(menu=mainmenu)

m1 = Menu(mainmenu,tearoff=0)
m1.add_command(label="New File",command=fun)
m1.add_command(label="Save",command=fun)
m1.add_command(label="Copy",command=fun)

mainmenu.add_cascade(label="File",menu=m1)

m2 = Menu(mainmenu,tearoff=0)
m2.add_command(label="Help",command=help)
m2.add_command(label="Rate us",command=rate)

mainmenu.add_cascade(label="Help",menu=m2)
root.mainloop()