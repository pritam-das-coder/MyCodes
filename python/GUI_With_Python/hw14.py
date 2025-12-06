from tkinter import *
from PIL import Image,ImageTk
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

img = Image.open(r"C:\Users\daspr\OneDrive\Desktop\MyCodes\python\GUI_With_Python\2025.gif")
img = img.resize((100,100))
tk_img = ImageTk.PhotoImage(img)
canvas_widget.create_image(60,60,image=tk_img)

root.mainloop()