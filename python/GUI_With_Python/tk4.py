from tkinter import *

root=Tk() # Create the basic window
# width x height
root.geometry("500x200") # initial window size

# width,height
root.minsize(200,50)

# width,height
root.maxsize(800,400)

# label is an element with which user don't interact
label=Label(text="I am Pritam")
label.pack()

root.mainloop()

# widget->every element in a GUI
# label-> non-interactive widget