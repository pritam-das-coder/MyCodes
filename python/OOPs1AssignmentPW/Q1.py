# 1. Design and implement a Python program for managing student information using object-oriented
# principles. Create a class called `Student` with encapsulated attributes for name, age, and roll number.
# Implement getter and setter methods for these attributes. Additionally, provide methods to display student
# information and update student details.
# Tasks:
#  Define the `Student` class with encapsulated attributes
#  Implement getter and setter methods for the attributes
#  Write methods to display student information and update details
#  Create instances of the `Student` class and test the implemented functionality.
class Student:
    def __init__(self,name,age,roll_number):
        self.__name=name
        self.__age=age
        self.__roll_number=roll_number
    def getName(self):
        return self.__name
    def getAge(self):
        return self.__age
    def getRollNumber(self):
        return self.__roll_number
    def setName(self,new_name):
        self.__name=new_name
    def setAge(self,new_age):
        self.__age=new_age
    def setRollNumber(self,new_roll):
        self.__name=new_roll
    def display(self):
        print(f"Name : {self.__name}")
        print(f"Age : {self.__age}")
        print(f"Roll Number : {self.__roll_number}")
    def update(self,new_name,new_age,new_roll):
        self.__name=new_name
        self.__age=new_age
        self.__roll_number=new_roll

st1=Student('Pritam',19,48)
st1.display()
print()
st1.update('Suman',20,390)
st1.display()
print()
print(st1.getName())
print()
st1.setAge(26)
print(st1.getAge())


