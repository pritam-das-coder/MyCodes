from tkinter import *
from PIL import Image, ImageTk

root=Tk()

root.geometry("552x742")

#photo=PhotoImage(file=r"G:\My Drive\MyCodes\python\GUI_With_Python\vk.jpg")

#For Jpg Images
image=Image.open(r"G:\My Drive\MyCodes\python\GUI_With_Python\vk.jpg")
photo=ImageTk.PhotoImage(image)

label=Label(image=photo)
label.pack()

root.mainloop()