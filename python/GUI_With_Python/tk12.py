from tkinter import *

def getvals():
    print("It works!")

root=Tk()
root.geometry("600x300")
Label(root,text="Welcome to Pritam Travels",font="comicsansms 15 bold",pady=15).grid(row=0,column=3)

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

namevalue=StringVar()
phonevalue=StringVar()
gendervalue=StringVar()
emergencyvalue=StringVar()
paymentmodevalue=StringVar()
foodservicevalue=IntVar()

nameentry=Entry(root,textvariable=namevalue)
phoneentry=Entry(root,textvariable=phonevalue)
genderentry=Entry(root,textvariable=gendervalue)
emergencyentry=Entry(root,textvariable=emergencyvalue)
paymentmodeentry=Entry(root,textvariable=paymentmodevalue)

nameentry.grid(row=1,column=1)
phoneentry.grid(row=2,column=1)
genderentry.grid(row=3,column=1)
emergencyentry.grid(row=4,column=1)
paymentmodeentry.grid(row=5,column=1)

check=Checkbutton(text="Want to prebook your meals?",variable=foodservicevalue)
check.grid(row=6,column=1)

Button(text="Submit to Pritam Travels",command=getvals).grid(row=7,column=1)

root.mainloop()