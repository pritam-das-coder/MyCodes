# Implement a basic stack data structure using a Python list. Include functions to push (append), pop, and check if the stack is empty.

class Stack:
    def __init__(self,lst):
        self.__lst=lst
    def push(self,a):
        self.__lst.append(a)
    def pop(self):
        self.__lst.pop()
    def isEmpty(self):
        return len(self.__lst) == 0
    def display(self): # Extra
        print(self.__lst)
    
arr = []
st = Stack(arr)
st.push(3)
st.push(5)
st.push(7)
st.push(9)
st.pop()
print(st.isEmpty())
st.display()