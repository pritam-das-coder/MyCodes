import os
from tkinter import *
from PIL import Image,ImageTk

root=Tk()
root.geometry("800x400")
root.title("My Newspaper GUI")

newspaper_name=Label(text="The Telegraph",font=("Times New Roman",20,"bold"))
newspaper_name.pack()

folder=r"C:\Users\daspr\OneDrive\Pictures\Web Photos"
files_list=os.listdir(folder)

img_list=[]

for file in files_list:
    if file.endswith(".png") or file.endswith(".webp") or file.endswith(".jpg"):
        corr_text_file=file[0]+".txt"
        full_text_path=os.path.join(folder,corr_text_file)
        full_img_path=os.path.join(folder,file)

        img=Image.open(full_img_path)
        img=img.resize((200,100))
        tk_img=ImageTk.PhotoImage(img)
        
        img_list.append(tk_img)

        text_file=open(full_text_path,"r")
        tk_text=text_file.read()

        f=Frame(root,bg="yellow",borderwidth=4,relief=SUNKEN)
        f.pack(side="left",anchor="nw")

        label=Label(f,image=tk_img,text=tk_text,compound="top",bg="yellow")
        label.pack(padx=10)

root.mainloop()