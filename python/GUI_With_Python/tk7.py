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
"largest city by population.", bg="red", fg="white", padx=113,pady=94, 
font="comicsansms 12 bold" ,borderwidth=10,relief=SUNKEN
)

title_label.pack()

root.mainloop()