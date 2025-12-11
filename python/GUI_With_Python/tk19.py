from tkinter import *

root=Tk()
root.geometry("700x350")

mainmenu = Menu(root)
root.config(menu=mainmenu)

m1 = Menu(mainmenu)
m1.add_command(label="New File",command=fun)
root.mainloop()