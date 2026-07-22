from tkinter import *

def display():
    print(f"The username is {uservalue.get()}")
    print(f"The password is {passvalue.get()}")

root=Tk()
root.geometry("500x250")

username = Label(root,text="Username")
password = Label(root, text="Password")

username.grid()
password.grid()

# Variable classes in tkinter
# StringVar , DoubleVar, BooleanVar, IntVar

uservalue = StringVar()
passvalue = StringVar()

userentry = Entry(root, textvariable=uservalue)
passentry = Entry(root, textvariable=passvalue)

userentry.grid(row=0,column=1)
passentry.grid(row=1,column=1)

show = Button(root,text="Submit",command=display)
show.grid()

root.mainloop()
