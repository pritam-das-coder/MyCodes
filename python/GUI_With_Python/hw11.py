from tkinter import *

def save():
    record_file=open(r"G:\My Drive\MyCodes\python\GUI_With_Python\record.txt","a")
    record_file.write(name.get()+"\t")
    record_file.write(roll_no.get()+"\t")
    record_file.write(dance_type.get()+"\t")
    record_file.write("\n")
    print("Your Form is submitted!")

root=Tk()
root.geometry("500x250")
root.title("Form")

head1=Label(root,text="Today's Dance Class",font="Elephant 16 bold",bg="violet")
head1.grid(columnspan=2,sticky=W)

head2=Label(root,text="Enter your details below : ",font="Arial 10 bold")
head2.grid(sticky=W,columnspan=2)

name = StringVar()
roll_no = StringVar()
dance_type = StringVar()

name_label=Label(root, text="Name :")
roll_no_label=Label(root, text="University Roll Number :")
dance_type_label=Label(root, text="Dance Type :")
name_label.grid(sticky=W)
roll_no_label.grid(sticky=W)
dance_type_label.grid(sticky=W)

name_entry=Entry(root, textvariable=name)
roll_no_entry=Entry(root, textvariable=roll_no)
dance_type_entry=Entry(root, textvariable=dance_type)
name_entry.grid(row=2,column=1)
roll_no_entry.grid(row=3,column=1)
dance_type_entry.grid(row=4,column=1)

submit = Button(root,text="Submit Form",command=save)
submit.grid(column=1)

root.mainloop()