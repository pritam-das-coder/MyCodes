from tkinter import *

root=Tk()
root.geometry("600x300")
Label(root,text="Welcome to Pritam Travels",font="comicsansms 15 bold").grid(row=0,column=3)

name=Label(root,text="Name")
phone=Label(root,text="Phone")
gender=Label(root,text="Gender")
emergency=Label(root,text="Emergency Contact")
paymentmode=Label(root,text="Payment Mode")

name.grid(row=1,column=0)
phone.grid(row=2,column=0)
gender.grid(row=3,column=0)
emergency.grid(row=4,column=0)
paymentmode.grid(row=5,column=0)

root.mainloop()