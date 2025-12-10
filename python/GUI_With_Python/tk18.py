from tkinter import *

def fun():
    print("Hello aap kese hai!")

root=Tk()
root.geometry("600x300")
root.title("Learn Menus & Submenus")

mainmenu = Menu(root)
root.config(menu=mainmenu)

m1 = Menu(mainmenu)
m1.add_command(label="New project",command=fun)
m1.add_command(label="Save",command=fun)
m1.add_command(label="Save As",command=fun)
m1.add_command(label="Print",command=fun)

mainmenu.add_cascade(label="File",menu=m1)
# mainmenu.add_cascade(label="File",command=fun)

root.mainloop()