from tkinter import *

def getvals():
    print(f"Name : {namevalue.get()}")
    print(f"Phone Number : {phonevalue.get()}")
    print(f"Gender : {gendervalue.get()}")
    print(f"Emergency Contact : {emergencyvalue.get()}")
    #print(f"Payment Mode : {paymentmodevalue.get()}")
    print(f"Food Service : {foodservicevalue.get()}")
    
    print("It works!")

root=Tk()
root.geometry("600x300")
Label(root,text="Welcome to Pritam Travels",font="comicsansms 15 bold",pady=15).grid(row=0,column=1,columnspan=20)

name=Label(root,text="Name :")
phone=Label(root,text="Phone :")
gender=Label(root,text="Gender :")
emergency=Label(root,text="Emergency Contact :")
paymentmode=Label(root,text="Payment Mode :")

name.grid(row=1,column=0,sticky=W)
phone.grid(row=2,column=0,sticky=W)
gender.grid(row=3,column=0,sticky=W)
emergency.grid(row=4,column=0,sticky=W)
paymentmode.grid(row=5,column=0,sticky=W)

namevalue=StringVar()
phonevalue=StringVar()
gendervalue=StringVar()
emergencyvalue=StringVar()
paymentmodevalue1=IntVar()
paymentmodevalue2=IntVar()
foodservicevalue=IntVar()

nameentry=Entry(root,textvariable=namevalue)
phoneentry=Entry(root,textvariable=phonevalue)
genderentry=Entry(root,textvariable=gendervalue)
emergencyentry=Entry(root,textvariable=emergencyvalue)

paymentmode1entry=Checkbutton(root,text="Online",variable=paymentmodevalue1)
paymentmode2entry=Checkbutton(root,text="Cash",variable=paymentmodevalue2)

nameentry.grid(row=1,column=1)
phoneentry.grid(row=2,column=1)
genderentry.grid(row=3,column=1)
emergencyentry.grid(row=4,column=1)
paymentmode1entry.grid(row=5,column=1,sticky=W)
paymentmode2entry.grid(row=5,column=1,sticky=E)

check=Checkbutton(text="Want to prebook your meals?",variable=foodservicevalue)
check.grid(row=7,column=1)

Button(text="Submit to Pritam Travels",command=getvals,borderwidth=6).grid(row=8,column=1)

root.mainloop()