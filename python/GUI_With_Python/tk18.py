from tkinter import *

def fun():
    print("Hello aap kese hai!")

root=Tk()
root.geometry("600x300")
root.title("Learn Menus & Submenus")

mainmenu = Menu(root)
root.config(menu=mainmenu)
mainmenu.add_command(label="File",command=fun)
mainmenu.add_command(label="Exit",command=quit)

root.mainloop()