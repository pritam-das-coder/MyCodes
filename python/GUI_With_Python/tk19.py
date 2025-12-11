from tkinter import *

def fun():
    print("Coding is fun")

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
m2.add_command()
root.mainloop()