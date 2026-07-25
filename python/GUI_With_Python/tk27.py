from tkinter import *

root=Tk()
root.geometry("700x500")
root.title("My GUI")

root.wm_iconbitmap(r"C:\Users\daspr\OneDrive\Desktop\MyCodes\python\GUI_With_Python\notepad.ico")
root.configure(background="red")

width=root.winfo_screenwidth() # pixel
height=root.winfo_screenheight()

print(f"{width}x{height}")
Button(text="Close",command=root.destroy).pack()

root.mainloop()