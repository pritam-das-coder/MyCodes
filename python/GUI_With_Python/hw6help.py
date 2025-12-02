import os
from tkinter import *
from PIL import Image, ImageTk  # PIP install pillow

# 1. Basic Setup (Videos 1-2)
root = Tk()
root.geometry("1000x400")
root.title("My Photo Album")

# 2. Reading the images (Using 'os' module as requested)
# Change this to the folder path on your computer
folder_path = r"G:\My Drive\MyCodes\python\GUI_With_Python"
# OR just use current folder:
# folder_path = os.getcwd() 

# Get all files from the folder
all_files = os.listdir(folder_path)

# This list is CRITICAL. 
# Tkinter will "forget" images if you don't store them in a list variable.
image_list = []

# 3. Loop through files and display them
for filename in all_files:
    # Check if it's an image (Basic string check)
    if filename.endswith(".png") or filename.endswith(".jpg") or filename.endswith(".jpeg"):
        
        # Create full path (Folder + Filename)
        full_path = os.path.join(folder_path, filename)
        
        # Open and Resize Image using PIL
        # We resize because photos are usually too big for the screen
        raw_img = Image.open(full_path)
        raw_img = raw_img.resize((200, 200)) # Make them 200x200 squares
        
        # Convert to Tkinter compatible format
        tk_img = ImageTk.PhotoImage(raw_img)
        
        # Save to our list so it doesn't get deleted by Python
        image_list.append(tk_img)
        
        # 4. Display using Label and Pack (Videos 5-6)
        # We use side="left" to line them up horizontally
        label = Label(root, image=tk_img)
        label.pack(side="left", padx=5, pady=5)

root.mainloop()