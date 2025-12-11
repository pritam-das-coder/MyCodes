from tkinter import *

root=Tk()
root.geometry("600x300")

# Label(root,text="Mercedes Benz").place(x=0,y=0)
# Label(root,text="Tata Safari").place(x=50,y=50,anchor=E)

Label(root,text="Mahindra SUV").place(relx=0.5,rely=0.2,anchor="center")
# default anchor = nw
root.mainloop()