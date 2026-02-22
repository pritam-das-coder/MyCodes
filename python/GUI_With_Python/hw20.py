from tkinter import *
import tkinter.messagebox as tmsg

def add():
    if slider.get()<=3:
        tmsg.showinfo("Apology Message","Sorry we can't satify you. We will try to improve ourselves.")
    else:
        tmsg.showinfo("Thank You Message","Thank you for giving your rating.")

    with open(r"C:\Users\daspr\OneDrive\Desktop\MyCodes\python\GUI_With_Python\rating.txt","a") as f:
        f.write(str(slider.get())+"\n")
    print("Rating Noted")


root=Tk()
root.geometry("700x400")
root.title("Restaurant Feedback")

Label(root,text="Thank you for coming to our restaurant.\nPlease give us a rating.").pack()

slider = Scale(root,from_=0,to=10,orient="horizontal",tickinterval=2,length=150)
slider.pack()
slider.set(10)

Button(root,text="Submit",relief="raised",borderwidth=5,command=add).pack(pady=10)

root.mainloop()