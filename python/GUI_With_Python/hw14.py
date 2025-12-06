from tkinter import *

root=Tk()

canvas_width=800
canvas_height=400

root.geometry(f"{canvas_width}x{canvas_height}")

canvas_widget=Canvas(root,width=canvas_width,height=canvas_height)
canvas_widget.pack()

canvas_widget.create_arc(30,40,200,210)

root.mainloop()