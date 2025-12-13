from tkinter import *

root=Tk()
root.geometry("600x350")
root.title("Learn Scrollbar")
# For connecting scrollbar to a widget
# 1. widget(yscrollcommand = scrollbar.set)
# 2. scrollbar.config()
sb=Scrollbar(root)
sb.pack()

root.mainloop()