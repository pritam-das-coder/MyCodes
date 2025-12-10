from tkinter import *

root=Tk()
root.geometry("600x300")
root.title("Learn Menus & Submenus")

mainmenu = Menu(root)
root.config(menu=mainmenu)

m1 = Menu(mainmenu)
m1.add_command()

root.mainloop()