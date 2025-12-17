from tkinter import *
import tkinter.messagebox as tmsg
from tkinter.filedialog import askopenfilename, asksaveasfilename
import os

def newFile():
    global file
    root.title("Untitled - Notepad")
    file=None
    body.delete("1.0","end")

def openFile():
    global file
    file=askopenfilename(defaultextension=".txt",
                         filetypes=[("All Files","*.*"),("Text Documents","*.txt")])
    
    if file=="":
        file=None
    else:
        root.title(os.path.basename(file)+" - Notepad")
        body.delete("1.0","end")
        f=open(file,"r")
        body.insert("1.0",f.read())
        f.close()

def saveFile():
    global file
    if file==None:
        file=asksaveasfilename(initialfile='Untitled.txt',defaultextension=".txt",
                               filetypes=[('All Files','*.*'),('Text Documents','*.txt')])
        if file=="":
            file=None
        else:
            #Save as a new file
            f=open(file,"w")
            f.write(body.get("1.0","end"))
            f.close()

            root.title(os.path.basename(file)+" - Notepad")
            print("File Saved")
    else:
        #Save the file
        f=open(file,"w")
        f.write(body.get("1.0","end"))
        f.close()

def saveAsFile():
    global file
    file=asksaveasfilename(initialfile='Joke.txt',defaultextension=".txt",
                           filetypes=[("All Files","*.*"),("Text Documents","*.txt")])
    if file=="":
        file=None
    else:
        f=open(fi)

def cut():
    body.event_generate("<<Cut>>")

def copy():
    body.event_generate("<<Copy>>")

def paste():
    body.event_generate("<<Paste>>")

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
m1.add_command(label="Save As",command=saveAsFile)
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

scroll = Scrollbar(root,width=25)
scroll.pack(side="right",fill="y")

body=Text(root,yscrollcommand=scroll.set)
body.pack(fill="both",expand=1)
body.config(font="lucida 16")
file=None

scroll.config(command=body.yview)

root.mainloop()