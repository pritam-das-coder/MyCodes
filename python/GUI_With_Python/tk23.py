from tkinter import *

root=Tk()
root.geometry("600x350")
root.title("Learn Scrollbar")

# For connecting scrollbar to a widget
# 1. widget(yscrollcommand = scrollbar.set)
# 2. scrollbar.config(command = widget.yview)

sb=Scrollbar(root)
sb.pack(fill=Y,side="right")
# sb=Scrollbar(root,orient="horizontal")
# sb.pack(fill="x",side="bottom")

lbx = Listbox(root,yscrollcommand=sb.set)
# lbx=Listbox(root,xscrollcommand=sb.set)
for i in range(344):
    lbx.insert(END,f"Item : {i}")
# lbx.insert(END,f"This is a very very very very very very very long line that needs scrolling...")
lbx.pack(fill="both",padx=22)

sb.config(command=lbx.yview)
# sb.config(command=lbx.xview)

root.mainloop()