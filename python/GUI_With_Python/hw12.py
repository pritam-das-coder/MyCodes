from tkinter import *

def fun():
    print("Values submitted!")

root = Tk()
root.geometry("600x300")

Label(root,text="Portal").grid(row=0,)

username = Label(root,text="Username :")
password = Label(root,text="Password :")

username.grid(row=1,column=0)
password.grid(row=2,column=0)

uservalue = StringVar()
passvalue = StringVar()

username_entry = Entry(root,textvariable=uservalue)
password_entry = Entry(root,textvariable=passvalue)

username_entry.grid(row=1,column=1)
password_entry.grid(row=2,column=1)

Button(root,text="Submit",borderwidth=6,bg="green",command=fun,relief="sunken").grid(row=3,column=1)

root.mainloop(