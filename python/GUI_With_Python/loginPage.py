from tkinter import *

root=Tk()
root.geometry("600x350")
root.title("Login System")

f0=Frame(root,relief="groove",borderwidth=5)
f0.place(relx=0.5,rely=0.5,anchor="center",relheight=0.6,relwidth=0.6)

Label(f0,text="Username").place(relx=0.1,rely=0.1,anchor="center")

root.mainloop()