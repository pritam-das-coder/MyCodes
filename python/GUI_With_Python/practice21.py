from tkinter import *
import tkinter.messagebox as tmsg

def order():
    order1=var1.get()
    order2=var2.get()
    order3=var3.get()
    order4=var4.get()
    if order1=="1" and order2=="1" and order3=="1" and order4=="1":
        msg="Please select your order."
    else:
        msg=f"Your order for {order1}{order2}{order3}{order4} has been taken. Thanks for ordering."
    tmsg.showinfo("Order Received",msg)


root=Tk()
root.geometry("400x250")
root.title("Learn Radiobutton")
root.minsize(400,250)
root.maxsize(400,250)

Label(root,text="What would you like to have sir?",font="lucida 19 bold",padx=14).pack()

# var=IntVar()
var1 = StringVar()
var2 = StringVar()
var3 = StringVar()
var4 = StringVar()
var1.set("1")
var2.set("1")
var3.set("1")
var4.set("1")
# var.set(1)
# print(var.get())
food_list=["Dosa","Idly","Roti","Fish","Fried Rice"]
var_list=[]
# Radiobutton(root,text="Dosa",variable=var1,value="dosa",padx=14).pack(anchor="w")
# Radiobutton(root,text="Idly",variable=var2,value="idly",padx=14).pack(anchor="w")
# Radiobutton(root,text="Roti",variable=var3,value="roti",padx=14).pack(anchor="w")
# Radiobutton(root,text="Fish",variable=var4,value="fish",padx=14).pack(anchor="w")
for i in range(len(food_list)):
    Radiobutton(root,text=food_list[i],variable=var_list[i],value=food_list[i]).pack(anchor="w")
# print(var.get())
Button(root,text="Order Now",borderwidth=5,relief="raised",command=order).pack()
# print(var.get())
root.mainloop()