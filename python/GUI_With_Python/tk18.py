from tkinter import *

def fun():
    print("Hello aap kese hai!")

root=Tk()
root.geometry("600x300")
root.title("Learn Menus & Submenus")

# Use this to create a non dropdown menu
# mainmenu = Menu(root)
# root.config(menu=mainmenu)
# mainmenu.add_command(label="File",command=fun)
# mainmenu.add_command(label="Exit",command=quit)

mainmenu = Menu(root)
root.config(menu=mainmenu)

m1 = Menu(mainmenu,tearoff=0)
m1.add_command(label="New Text File",command=fun)
m1.add_command(label="New Window",command=fun)
m1.add_separator()
m1.add_command(label="Open File",command=fun)
m1.add_command(label="Save",command=fun)

mainmenu.add_cascade(label="File",menu=m1) # submenu add


root.mainloop()