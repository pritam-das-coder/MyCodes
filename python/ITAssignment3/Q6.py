# Implement class and objects in python
class Student:
    def __init__(self,name,roll,dept):
        self.__name=name
        self.__roll=roll
        self.__dept=dept
    def getName(self):
        return self.__name
    def getRoll(self):
        return self.__roll
    def getDept(self):
        return self.__dept
    def setName(self,n):
        self.__name=n
    def setRoll(self,r):
        self.__roll=r
    def setDept(self,d):
        self.__dept=d

s=Student("Pritam",48,"CSE")
print(f"Name : {s.getName()}")
print(f"Roll Number : {s.getRoll()}")
print(f"Department : {s.getDept()}")
