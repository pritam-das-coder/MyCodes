from tkinter import *
import tkinter.messagebox as tmsg

def order():
    order=var.get()
    if order=="Food":
        msg="Please select your order."
    else:
        msg=f"Your order for {order} has been taken. Thanks for ordering."
    tmsg.showinfo("Order Received",msg)


root=Tk()
root.geometry("400x250")
root.title("Learn Radiobutton")
root.minsize(400,250)
root.maxsize(400,250)

Label(root,text="What would you like to have sir?",font="lucida 19 bold",padx=14).pack()

# var=IntVar()
var = StringVar()
var.set("Food")
# var.set(1)
# print(var.get())
food_list=["Dosa","Idly","Roti","Fish","Fried Rice"]
Radiobutton(root,text="Dosa",variable=var,value="dosa",padx=14).pack(anchor="w")
Radiobutton(root,text="Idly",variable=var,value="idly",padx=14).pack(anchor="w")
Radiobutton(root,text="Roti",variable=var,value="roti",padx=14).pack(anchor="w")
Radiobutton(root,text="Fish",variable=var,value="fish",padx=14).pack(anchor="w")
# for i in range(len(food_list)):
#     Radiobutton(root,text=food_list[i],variable=var,value=food_list[i]).pack(anchor="w")
# print(var.get())
Button(root,text="Order Now",borderwidth=5,relief="raised",command=order).pack()
# print(var.get())
root.mainloop()