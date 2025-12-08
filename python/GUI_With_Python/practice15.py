from tkinter import *

def copy(event):
    wid=event.widget
    wid_text=wid.cget('text')

    root.clipboard_clear()
    root.clipboard_append(wid_text)

    root.update()

root=Tk()
root.geometry("600x300")
root.title("Learn Tkinter Events")

lb=Label(root,text="Tumi kotha deyechile Kota je harie gele")
lb.pack()

entry=Entry()
entry.pack()
lb.bind('<Control-c>',copy)

lb.focus_set()
# Tumi kotha deyechile Kota je harie gele

root.mainloop()