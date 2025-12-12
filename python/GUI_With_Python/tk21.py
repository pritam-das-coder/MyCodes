from tkinter import *
import tkinter.messagebox as tmsg

def order():
    tmsg.showinfo("Restaurant Order",f"Your order has been taken.")


root=Tk()
root.geometry("700x400")
root.title("Learn Radiobutton")

Label(root,text="What would you like to have sir?",font="lucida 19 bold").pack()

var=IntVar()

Radiobutton(root,text="Dosa",variable=var,value=1).pack()
Radiobutton(root,text="Idly",variable=var,value=2).pack()
Radiobutton(root,text="Roti",variable=var,value=3).pack()
Radiobutton(root,text="Fish",variable=var,value=4).pack()
print(var.get())
Button(root,text="Submit",borderwidth=5,relief="raised",command=order).pack()

root.mainloop()