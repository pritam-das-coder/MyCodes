# from tkinter import *

# root=Tk()
# root.geometry("600x300")

# Label(root,text="Mercedes Benz",bg="red").place(x=0,y=0,width=130,height=50)
# # Label(root,text="Tata Safari").place(x=50,y=50,anchor=E)

# # Label(root,text="Mahindra SUV",bg="red").place(relx=0.5,rely=0.5,anchor="center")
# # default anchor = nw

# # Label(root,text="Cars",bg="red").place(relx=0.5,rely=0,relheight=1,relwidth=0.5)
# root.mainloop()
import tkinter as tk

root = tk.Tk()
root.title("Login System")
root.geometry("400x300")

# 1. Main Frame (Centered)
# We place a frame in the center using relative positioning
frame = tk.Frame(root, bg="#f0f0f0", bd=2, relief="groove")
# relwidth=0.8 means the frame is 80% as wide as the window
frame.place(relx=0.5, rely=0.5, anchor='center', relwidth=0.8, relheight=0.6)

# 2. Widgets inside the Frame
# Note: x and y here are relative to the FRAME, not the window
lbl_user = tk.Label(frame, text="Username:", bg="#f0f0f0")
lbl_user.place(relx=0.1, rely=0.2)

entry_user = tk.Entry(frame)
entry_user.place(relx=0.4, rely=0.2, relwidth=0.5)

lbl_pass = tk.Label(frame, text="Password:", bg="#f0f0f0")
lbl_pass.place(relx=0.1, rely=0.5)

entry_pass = tk.Entry(frame, show="*")
entry_pass.place(relx=0.4, rely=0.5, relwidth=0.5)

# 3. Login Button
btn_login = tk.Button(frame, text="Login", bg="blue", fg="white")
btn_login.place(relx=0.5, rely=0.85, anchor='center', width=100)

root.mainloop()