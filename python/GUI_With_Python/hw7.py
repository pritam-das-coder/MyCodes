from tkinter import *

root=Tk()
root.geometry("500x400")
root.title("My Website")

strip_label=Label(text="Ready!",bg="blue",fg="white",font=("Times New Roman", 15 ,"bold"),
                  borderwidth=12)
strip_label.pack(side="bottom",fill=X)

root.mainloop()