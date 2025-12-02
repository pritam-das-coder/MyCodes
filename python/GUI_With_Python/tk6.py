from tkinter import *

root=Tk()

root.geometry("300x100")

photo=PhotoImage(file="design.png")

label=Label(image=photo)
label.pack()

root.mainloop()