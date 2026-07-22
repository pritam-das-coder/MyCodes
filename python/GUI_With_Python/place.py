from tkinter import *

root=Tk()
root.geometry("600x300")

Label(root,text="Mercedes Benz",bg="red").place(x=0,y=0,width=130,height=50)
# Label(root,text="Tata Safari").place(x=50,y=50,anchor=E)

# Label(root,text="Mahindra SUV",bg="red").place(relx=0.5,rely=0.5,anchor="center")
# default anchor = nw

# Label(root,text="Cars",bg="red").place(relx=0.5,rely=0,relheight=1,relwidth=0.5)
root.mainloop()
