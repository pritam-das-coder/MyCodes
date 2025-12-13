from tkinter import *

root=Tk()
root.geometry("600x350")
root.title("")

sb=Scrollbar(root)
sb.pack()

text = Text(root,yscrollcommand=sb.set)
text.pack(fill="both",expand=True)

sb.config(command=text.yview)

root.mainloop()