from tkinter import *

class GUI(Tk):
    def __init__(self): # self -> root
        super().__init__()
        self.geometry("600x350")

    def status(self):
        self.sb=Label(self,text="Ready",relief="raised",borderwidth=4,anchor="w")
        self.sb.pack(side="bottom",fill="x")

    def click(self):
        print("Button clicked")

    def createbutton(self,txt):
        Button(self,text=txt,relief="raised",borderwidth=4,command=self.click).pack()

if __name__ == "__main__":
    window=GUI() # window -> root
    window.status()
    window.createbutton("Click me")
    window.mainloop()