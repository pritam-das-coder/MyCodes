from tkinter import *

root=Tk()
root.geometry("600x350")
root.title("Login System")

f0=Frame(root,relief="groove",borderwidth=5)
f0.place(relx=0.5,rely=0.5,anchor="center",relheight=0.6,relwidth=0.6)

Label(f0,text="Username").place(relx=0.2,rely=0.3,anchor="center")
Label(f0,text="Password").place(relx=0.2,rely=0.6,anchor="center")

passvalue=StringVar()
uservalue=StringVar()

Entry(f0,textvariable=uservalue).place(relx=0.2,rely=)
root.mainloop()