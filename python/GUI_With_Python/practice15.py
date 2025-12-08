from tkinter import *

def copy(event):
    widget_text=event.widget

root=Tk()
root.geometry("600x300")
root.title("Learn Tkinter Events")

lb=Label(root,text="Tumi kotha deyechile Kota je harie gele")
lb.pack()




root.mainloop()