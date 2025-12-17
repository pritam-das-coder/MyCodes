from tkinter import *
import tkinter.messagebox as tmsg
def newFile():
    pass

def openFile():
    pass

def saveFile():
    pass

def cut():
    pass

def copy():
    pass

def paste():
    pass

def about():
    tmsg.showinfo("About Notepad","Created by Pritam Das")

root=Tk()
root.geometry("600x450")
root.title("Untitled - Notepad")
root.wm_iconbitmap(r"C:\Users\daspr\OneDrive\Desktop\MyCodes\python\GUI_With_Python\notepad.ico")

mainmenu = Menu(root)
root.config(menu=mainmenu)

m1 = Menu(mainmenu,tearoff=0)
m1.add_command(label="New",command=newFile)
m1.add_command(label="Open",command=openFile)
m1.add_command(label="Save",command=saveFile)
m1.add_separator()
m1.add_command(label="Exit",command=root.destroy)

mainmenu.add_cascade(label="File",menu=m1)

m2 = Menu(mainmenu,tearoff=0)
m2.add_command(label="Cut",command=cut)
m2.add_command(label="Copy",command=copy)
m2.add_command(label="Paste",command=paste)

mainmenu.add_cascade(label="Edit",menu=m2)

m3 = Menu(mainmenu,tearoff=0)
m3.add_command(label="About Notepad",command=about)

mainmenu.add_cascade(label="Help",menu=m3)

scroll = Scrollbar(root)
scroll.pack(side="right",fill="y")

body=Text(root,yscrollcommand=scroll.set)
body.pack(fill="both",expand=1)
body.config(font="lucida 16")
file=None

scroll.config(command=body.yview)

root.mainloop()