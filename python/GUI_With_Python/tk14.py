# Canvas Widget
from tkinter import *

root=Tk()

canvas_width=800
canvas_height=400

root.geometry(f"{canvas_width}x{canvas_height}")
root.title("Canvas Shapes")
can_widget=Canvas(root,width=canvas_width,height=canvas_height)
can_widget.pack()

# line goes from the point x1, y1 to x2,y2 
# can_widget.create_line(0,0,800,400,fill="red") # (x1,y1,x2,y2)
# can_widget.create_line(800,0,0,400,fill="red")

# for rectangle give coordinates of top left and bottom right
# can_widget.create_rectangle(10,10,600,200,fill="blue")

# to write text give center coordinates of text
# can_widget.create_text(400,200,text="Hello Pritam!")

# can_widget.create_rectangle(20,20,600,300)
# for oval give end coordinates of main diagonal of a rectangle that fits oval see 'oval.png'
# can_widget.create_oval(20,20,600,300,fill="green")
# can_widget.create_oval(0,0,200,200)
can_widget.create_rectangle(1,1,200,200)
root.mainloop()