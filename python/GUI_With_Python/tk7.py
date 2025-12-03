from tkinter import *

root=Tk()
root.geometry("444x233")
root.title("My GUI With Pritam")

# Important Label Parameters
# text -> adds the text
# bg -> background
# fg -> foreground/ writing colour
# font -> sets the font
# 1. font=("comicsansms",20,"bold")
# 2. font="comicsansms 20 bold"
# padx -> x padding
# pady -> y padding
# relief -> border styling - SUNKEN, RAISED, GROOVE, RIDGE
# borderwidth

title_label = Label(text="The Republic of India, also known as Bharat, is a federal parliamentary republic in " \
"South Asia and the world's most populous country and largest democracy.\n New Delhi is its capital, and Mumbai is its " \
"largest city by population.", bg="red", fg="white", padx=13,pady=30, 
font="comicsansms 8 bold" ,borderwidth=5,relief=SUNKEN
)

# Important Pack Parameters
# anchor -> ne, nw, se, sw
# side -> left, right, top, bottom
# fill -> Y(use side="right" or "left"), X(use side="top" or "bottom")
# title_label.pack(side="top",anchor="ne", fill=X)
# title_label.pack(side="left",anchor="ne", fill=Y)
title_label.pack(padx=12,pady=50)

root.mainloop()