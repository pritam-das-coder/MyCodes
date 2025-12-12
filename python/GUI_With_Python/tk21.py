from tkinter import *
import tkinter.messagebox as tmsg

def order():
    tmsg.showinfo("Order Received",f"Your order for {var.get()} has been taken. Thanks for ordering.")


root=Tk()
root.geometry("700x400")
root.title("Learn Radiobutton")

Label(root,text="What would you like to have sir?",font="lucida 19 bold",bg="red").pack(fill="x")

# var=IntVar()
var = StringVar()
var.set("Food")
# var.set(1)
# print(var.get())
Radiobutton(root,text="Dosa",variable=var,value="dosa",bg="yellow").pack()
Radiobutton(root,text="Idly",variable=var,value="idly",bg="green").pack()
Radiobutton(root,text="Roti",variable=var,value="roti").pack()
Radiobutton(root,text="Fish",variable=var,value="fish").pack()
# print(var.get())
Button(root,text="Order Now",borderwidth=5,relief="raised",command=order).pack()
# print(var.get())
root.mainloop()