from tkinter import *
import tkinter.messagebox as tmsg

def get_dollar():
    print(f"We have credited {myslider.get()} dollars to your bank account")
    tmsg.showinfo("Amount Credited!",f"We have credited {myslider.get()} dollars to your bank account")
    
root=Tk()
root.geometry("700x400")
root.title("Learn Slider")

# myslider=Scale(root,from_=0,to=100) # vertical
# myslider.pack()
Label(root,text="How many dollars do you want?").pack()

myslider = Scale(root,from_=0,to=100,orient=HORIZONTAL)
myslider.pack()

Button(root,text="Get Dollars!",relief="raised",borderwidth=4,command=get_dollar).pack(pady=10)

root.mainloop()