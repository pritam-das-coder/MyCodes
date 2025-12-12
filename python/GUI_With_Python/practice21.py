from tkinter import *
import tkinter.messagebox as tmsg

def order():
    order_items=""
    for i in range(len(var_list)):
        item=var_list[i].get()
        if item!="Food":
            order_items+=item+", "
    order_items=order_items.removesuffix(", ")
    if order_items=="":
        msg="Please select your order."
    else:
        msg=f"Your order for {order_items} has been taken. Thanks for ordering."

    tmsg.showinfo("Order Received",msg)


root=Tk()
root.geometry("400x250")
root.title("Make your order")
root.minsize(400,250)
root.maxsize(400,250)


Label(root,text="What would you like to have sir?",font="lucida 19 bold",padx=14).pack()

wid=Canvas(root,height=10) # mention height
wid.pack()
wid.create_line(0,5,400,5)

food_list=["Dosa","Idly","Roti","Fish","Fried Rice"]
var_list=[]
for i in range(len(food_list)):
    v=StringVar()
    v.set("Food")
    var_list.append(v)

for i in range(len(food_list)):
    Radiobutton(root,text=food_list[i],variable=var_list[i],value=food_list[i]).pack(anchor="w")

Button(root,text="Order Now",borderwidth=5,relief="raised",command=order).pack()

root.mainloop()