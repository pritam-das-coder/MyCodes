import os
from tkinter import *
from PIL import Image,ImageTk

root=Tk()
root.geometry("800x400")
root.title("My Newspaper GUI")

newspaper_name=Label(text="The Telegraph")

img=Image.open(r"G:\My Drive\MyCodes\python\GUI_With_Python\vk.jpg")
tk_img=ImageTk.PhotoImage(img)

l=Label(image=tk_img,text="Hello")
l.pack()
# folder=r""
# files_list=os.listdir(folder)

# for file in files_list:


root.mainloop()