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

m1 = Menu(mainmenu)
m1.add_command(label="New Text File")



root.mainloop()