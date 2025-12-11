from tkinter import *

root=Tk()
root.geometry("700x400")
root.title("Restaurant Feedback")

Label(root,text="Thank you for coming to our restaurant.\nPlease give us a rating.").pack()

slider =Scale()
root.mainloop()