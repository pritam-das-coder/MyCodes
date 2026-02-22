from tkinter import *

def add():
    global i
    lbx.insert(ACTIVE,f"{i}") # jeta select hoe ache tar top e insert hobe
    i+=1

def delete():
    selected_items=lbx.curselection()
    # print(selected_items)
    for i in reversed(selected_items):
        lbx.delete(i)

i=0
root=Tk()
root.geometry("600x350")
root.title("Learn Listbox")

lbx=Listbox(root,selectmode="multiple")
lbx.pack()
# lbx.insert(END,"First item")
# lbx.insert(END,"Second item")
# lbx.insert(END,"Third item")
# lbx.insert(END,"Fourth item")

# lbx.delete(1,2)
# print(lbx.curselection())

Button(root,text="Add item",command=add,borderwidth=5,relief="raised").pack(pady=10)
Button(root,text="Delete item",command=delete,borderwidth=5,relief="raised").pack(pady=10)

root.mainloop()