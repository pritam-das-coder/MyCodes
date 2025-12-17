from tkinter import *
import tkinter.messagebox as tmsg

def click(event):
    global history
    op=event.widget.cget('text')
    val=var.get()
    if op=='C':
        val=""
    elif op=='=':
        try:
            st=val
            val=eval(val)
            st+='='+str(val)
            history.append(st)

            if len(history)>5:
                history.pop(0)
        except Exception as e:
            val="Error"
            print(e)
    elif op=='()':
        c1=val.count('(')
        c2=val.count(')')
        if c1>c2:
            val+=')'
        elif c1==c2:
            val+='*('
    elif op=='+/_':
        if val.startswith('-'):
            val=val[1:]
        else:
            val='-'+val
    elif op=='x':
        val=val[:len(val)-1]
    else:
        val+=op

    var.set(val)
    e0.update()

def show_history():
    history_text=""
    if history==[]:
        history_text="No Past Calculations"
    else:
        history_text='\n'.join(history)
    tmsg.showinfo(title="Past Calculations",message=history_text)

root=Tk()

root.geometry("312x310")
root.wm_iconbitmap(r"C:\Users\daspr\OneDrive\Desktop\MyCodes\python\GUI_With_Python\calculator.ico")
root.title("Calculator")

mainmenu=Menu(root)
root.config(menu=mainmenu)

history=[]
mainmenu.add_command(label="History",command=show_history)

var=StringVar()
var.set("")
e0=Entry(root,textvariable=var,width=20,font="lucida 20",justify="right",border=6)
e0.grid(columnspan=4)

text_list=["C","()","x","/","7","8","9","*","4","5","6","-","1","2","3","+",".","0","+/_","="]

c=0

for i in range(2,7):
    for j in range(0,4):
        but=Button(text=text_list[c],font="lucida 15",fg="#3032AF",border=6)
        but.grid(row=i,column=j,sticky="nsew") # ⅹ ÷
        but.bind('<Button-1>',click)
        c+=1

root.mainloop()
# Try using frame and pack()