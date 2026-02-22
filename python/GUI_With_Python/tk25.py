from tkinter import *

def update():
    statusvar.set("Busy..")
    sbar.update()
    import time
    time.sleep(2)
    statusvar.set("Ready")
    
root=Tk()
root.geometry("600x350")
root.title("Learn Status bar")

statusvar=StringVar()
statusvar.set("Ready")
sbar=Label(root,textvariable=statusvar,relief="sunken",anchor="w")
sbar.pack(side="bottom",fill="x")

Button(root,text="Upload",command=update).pack()

root.mainloop()