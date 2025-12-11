from tkinter import *

root=Tk()
root.geometry("700x400")
root.title("Learn Slider")

# myslider=Scale(root,from_=0,to=100) # vertical
# myslider.pack()
Label(root,text="How many dollars do you want?").pack()

myslider = Scale(root,from_=0,to=100,orient=HORIZONTAL)
myslider.pack()

Button(root,text="Get Dollars!",relief=SUNKEN).pack(pady=10)

root.mainloop()