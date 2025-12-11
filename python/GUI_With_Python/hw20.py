from tkinter import *

root=Tk()
root.geometry("700x400")
root.title("Restaurant Feedback")

Label(root,text="Thank you for coming to our restaurant.\nPlease give us a rating.").pack()

slider = Scale(root,from_=0,to=10,orient="horizontal")
slider.pack()

Button(root,text="Submit",relief="raised",borderwidth=5).pack(pady=10)

root.mainloop()