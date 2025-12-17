from tkinter import *

def changeFont():
    root1=Tk()
    root1.geometry("200x50")
    font=StringVar()
    size=StringVar()
    f0=Frame(root1)
    f0.pack()
    Label(f0,text="Enter the font name : ").pack(side="left")
    Entry(f0,textvariable=font).pack()
    f1=Frame(root1)
    f1.pack()
    Label(f1,text="Enter the font name : ").pack(side="left")
    Entry(f1,textvariable=size).pack()

    body.config(font=f"{font.get()} {size.get()}")
    root.update()

root=Tk()
root.geometry("600x450")
root.title("My Notepad")
root.wm_iconbitmap(r"C:\Users\daspr\OneDrive\Desktop\MyCodes\python\GUI_With_Python\notepad.ico")

mainmenu = Menu(root)
root.config(menu=mainmenu)

m1 = Menu(mainmenu,tearoff=0)
m1.add_command(label="Open")
m1.add_command(label="Save")
m1.add_command(label="Save as")
m1.add_separator()
m1.add_command(label="Exit",command=root.destroy)

mainmenu.add_cascade(label="File",menu=m1)

m2 = Menu(mainmenu,tearoff=0)
m2.add_command(label="Undo")
m2.add_separator()
m2.add_command(label="Cut")
m2.add_command(label="Copy")
m2.add_command(label="Paste")
m2.add_command(label="Delete")
m2.add_separator()
m2.add_command(label="Time/Date")
m2.add_separator()
m2.add_command(label="Font",command=changeFont)

mainmenu.add_cascade(label="Edit",menu=m2)

m3 = Menu(mainmenu,tearoff=0)
m3.add_command(label="Status Bar")
m3.add_separator()
m3.add_command(label="Zoom")

mainmenu.add_cascade(label="View",menu=m3)

body=Text(root)
body.pack(fill="both",expand=1)
body.config(font="lucida 16")

root.mainloop()