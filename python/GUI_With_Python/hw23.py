from tkinter import *

root=Tk()
root.geometry("600x350")
root.title("My Text Editor")

sb=Scrollbar(root)
sb.pack(side="right",fill="y")

text = Text(root,yscrollcommand=sb.set)
text.pack(fill="both",expand=True)

sb.config(command=text.yview)

root.mainloop()