from tkinter import *

root=Tk()
root.geometry("600x350")
root.title("My Text Editor")

sb1=Scrollbar(root)
sb1.pack(side="right",fill="y")
sb2=Scrollbar(root,orient="horizontal")
sb2.pack(side="bottom",fill="x")

text = Text(root,yscrollcommand=sb1.set)
text.pack(fill="both",expand=True)
text.insert(1,0,"")

sb1.config(command=text.yview)
sb2.config(command=text.xview)


root.mainloop()