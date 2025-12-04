from tkinter import *

root=Tk()
root.geometry("500x250")

username = Label(root,text="Username")
password = Label(root, text="Password")

username.grid()
password.grid()

root.mainloop()