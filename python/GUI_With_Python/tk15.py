from tkinter import *

def fun(event):
    print(f"You clicked on the button at {event.x}, {event.y}")
def hello(event):
    print("Hello")
def bye(event):
    print("Bye")

root=Tk()
root.geometry("600x300")
root.title("Learn Tkinter Events")

widget=Button(root,text="Click me")
widget.pack()

widget.bind('<Button-1>',fun)
widget.bind('<Double-1>',quit)
# widget.bind('<Motion>',hello)
widget.bind("<Enter>",hello)
widget.bind("<Leave>",bye)

root.mainloop()