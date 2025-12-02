from tkinter import *
from PIL import Image, ImageTk
import os

os.chdir(r"G:\My Drive\MyCodes\python\GUI_With_Python")
root=Tk()

# root.geometry("100x50")

image1=Image.open("vk.jpg")
photo1=ImageTk.PhotoImage(image1)

image2=Image.open("flower.png")
photo2=ImageTk.PhotoImage(image2)

label1=Label(image=photo1)
label1.pack()

label2=Label(image=photo2)
label2.pack()

root.mainloop()