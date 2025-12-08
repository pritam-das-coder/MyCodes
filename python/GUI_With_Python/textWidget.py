from tkinter import *

root=Tk()
root.geometry("600x300")
root.title("Learn Tkinter Text Widget")
# line_number.character
wid=Text(root,height=1,width=20,bd=4)
wid.insert("1.0","Hi hello bye")
wid.pack()

root.mainloop()