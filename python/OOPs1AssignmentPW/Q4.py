# 4.Write a Python program that models different animals and their sounds. Design a base class called
# `Animal` with a method `make_sound()`. Create subclasses like `Dog` and `Cat` that override the
# `make_sound()` method to produce appropriate sounds.
# Tasks:
#  Define the `Animal` class with a method `make_sound()`
#  Create subclasses `Dog` and `Cat` that override the `make_sound()` method
#  Implement the sound generation logic for each subclass
#  Test the program by creating instances of `Dog` and `Cat` and calling the `make_sound()` method.
class Animal:
    def make_sound(self):
        print("Animal Sound")

class Dog(Animal):
    def make_sound(self):
        print("Dog barks")

class Cat(Animal):
    def make_sound(self):
        print("Cat meows")

def main():
    dog=Dog()
    cat=Cat()

    dog.make_sound()
    cat.make_sound()

if __name__=='__main__':
    main()