# Create a gui window which takes as input width and heightand upon clicking apply it should be able to change its size accordingly
from tkinter import *
def change():
    root.geometry(width.get()+"x"+height.get())
    root.update()

root=Tk()
root.geometry("600x300")
root.title("Alter Window Dimensions")
Label(root,text="Window Resizer",font="comicsans 15 bold").grid(row=0,column=1)
Label(root,text="Enter the width : ").grid()
Label(root,text="Enter the height : ").grid()

width=StringVar()
height=StringVar()

width_entry=Entry(root,textvariable=width)
height_entry=Entry(root,textvariable=height)

width_entry.grid(row=1,column=1,pady=3)
height_entry.grid(row=2,column=1,pady=3)

Button(root,text="Apply Changes",command=change).grid(row=3,column=1)
root.mainloop()