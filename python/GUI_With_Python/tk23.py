from tkinter import *

root=Tk()
root.geometry("600x350")
root.title("Learn Scrollbar")

# For connecting scrollbar to a widget
# 1. widget(yscrollcommand = scrollbar.set)
# 2. scrollbar.config(command = widget.yview)

sb=Scrollbar(root)
sb.pack(fill=Y,side="right")

lbx = Listbox(root,yscrollcommand=sb.set)
for i in range(344):
    lbx.insert(END,f"Item : {i}")
lbx.pack()

sb.config(command=lbx.yview)

root.mainloop()