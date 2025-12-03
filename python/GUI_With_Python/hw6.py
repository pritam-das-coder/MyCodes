import os
from tkinter import *
from PIL import Image, ImageTk

root=Tk()
root.geometry("400x300")
root.title("Photo Album")

image_folder=r""
files_present=os.listdir(image_folder)

image_list=[]

for file in files_present:
    if file.endswith(".png") or file.endswith(".jpg") or file.endswith(".jpeg"):

        full_path=os.path.join(image_folder,file)

        img=Image.open(full_path)
        img=img.resize(100,200)

        tk_img=ImageTk.PhotoImage(img)

        image_list.append(tk_img)

        label=Label(image=tk_img)
        label.pack()

root.mainloop()