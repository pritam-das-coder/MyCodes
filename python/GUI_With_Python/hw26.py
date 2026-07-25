from tkinter import *

class GUI(Tk):
    def __init__(self): # self -> root
        super().__init__()
        self.geometry("600x350")

    def status(self):
        self.sbvar=StringVar()
        self.sbvar.set("Ready")
        self.sb=Label(self,textvariable=self.sbvar,relief="raised",borderwidth=4,anchor="w")
        self.sb.pack(side="bottom",fill="x")

    def click(self):
        print("Button clicked")
        self.sbvar.set("Busy..")
        self.update()
        self.write_to_file()
        import time
        time.sleep(2)
        self.sbvar.set("Ready")

    def createbutton(self,txt):
        Button(self,text=txt,relief="raised",borderwidth=4,command=self.click).pack()

    def createtext(self):
        self.t=Text(self,height=10,borderwidth=5,relief="sunken")
        self.t.pack(fill="both",padx=10)

    def write_to_file(self):
        txt=self.t.get("1.0","end-1c")
        with open(r"C:\Users\daspr\OneDrive\Desktop\MyCodes\python\GUI_With_Python\new.txt","w") as f:
            f.write(txt)

    def create_label(self,txt):
        Label(self,text=txt,font="lucida 16 bold").pack()
        
if __name__ == "__main__":
    window=GUI() # window -> root
    window.create_label("Start Typing")
    window.status()
    window.createtext()
    window.createbutton("Upload")
    window.mainloop()
    