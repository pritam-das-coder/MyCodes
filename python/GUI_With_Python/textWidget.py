from tkinter import *

root=Tk()
root.geometry("600x300")
root.title("Learn Tkinter Text Widget")
# line_number.character
# 1.0 -> start
# 1-> line number starts from 1
# 0-> after 0th character starts from character 0
wid=Text(root,height=1,width=20,bd=4)
wid.insert("1.0","Hi hello bye")
wid.pack()

root.mainloop()