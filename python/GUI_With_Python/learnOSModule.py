import os
from tkinter import *
from PIL import Image, ImageTk

print(f"Initial : {os.getcwd()}")
os.chdir(r"G:\My Drive\MyCodes\python\GUI_With_Python")
print(f"Final : {os.getcwd()}")

root=Tk()

image=Image.open("vk.jpg")
photo=ImageTk.PhotoImage(image)

label=Label(image=photo)
label.pack()

root.mainloop()