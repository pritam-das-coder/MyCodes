from tkinter import *

root=Tk()

root.geometry("500x300")

photo=PhotoImage(file=r"G:\My Drive\MyCodes\python\GUI_With_Python\vk.jpg")

label=Label(image=photo)
label.pack()

root.mainloop()