from tkinter import *

root=Tk()

canvas_width=800
canvas_height=400

root.geometry(f"{canvas_width}x{canvas_height}")

canvas_widget=Canvas(root,width=canvas_width,height=canvas_height)
canvas_widget.pack()

# end points of main diagonal of rectangle boxing ellipse
# we get the arc of an ellipse
# base-line -> start -> extent
# canvas_widget.create_arc(30,40,200,210,start=90,extent=270)

canvas_widget.create_image()

root.mainloop()