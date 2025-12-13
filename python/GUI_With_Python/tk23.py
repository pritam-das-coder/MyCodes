from tkinter import *

root=Tk()
root.geometry("600x350")
root.title("Learn Scrollbar")

# For connecting scrollbar to a widget
# 1. widget(yscrollcommand = scrollbar.set)
# 2. scrollbar.config(command = widget.yview)

sb=Scrollbar(root)
sb.pack(fill=Y)

# lbx = Listbox(root)
# for i in range(344):
#     lbx.insert(END,f"Item : {i}")
# lbx.pack()

root.mainloop()