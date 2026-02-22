import os
from tkinter import *
from PIL import Image,ImageTk

def every_100(text):
    final_text=""
    for i in range(0,len(text)):
        final_text+=text[i]
        if(i%100==0 and i!=0):
            final_text+="\n"
    return final_text

root=Tk()
root.geometry("1000x780")
root.title("My Newspaper GUI")

f0=Frame(root,height=40,width=1000)
f0.pack()
newspaper_name=Label(f0,text="The Telegraph",font=("Times New Roman",20,"bold"))
newspaper_name.pack()
Label(f0,text="December 10, 2025",font=("Times New Roman",12,"bold")).pack()

line = Canvas(root,height=10,width=1000)
line.pack()
line.create_line(0,10,1000,10)

folder=r"C:\Users\daspr\OneDrive\Pictures\Web Photos"
files_list=os.listdir(folder)

img_list=[]
c=0
for file in files_list:
    if file.endswith(".png") or file.endswith(".webp") or file.endswith(".jpg"):
        c+=1
        corr_text_file=file[0]+".txt"
        full_text_path=os.path.join(folder,corr_text_file)
        full_img_path=os.path.join(folder,file)

        img=Image.open(full_img_path)
        img=img.resize((400,200),Image.LANCZOS)
        tk_img=ImageTk.PhotoImage(img)
        
        img_list.append(tk_img)

        text_file=open(full_text_path,"r")
        tk_text=text_file.read()
        tk_text=every_100(tk_text)

        st="left"
        if(c%2==0): st="right"
        f1=Frame(root,height=250,width=1000)
        f1.pack(anchor=W,pady=10)
        Label(f1,text=tk_text).pack(padx=10,side=st)
        Label(f1,image=tk_img).pack(anchor="e")

root.mainloop()