from tkinter import *

root=Tk()
root.geometry("700x400")
root.title("Learn Slider")

# myslider=Scale(root,from_=0,to=100) # vertical
# myslider.pack()

myslider = Scale(root,from_=0,to=100,orient=HORIZONTAL)
myslider.pack()

root.mainloop()