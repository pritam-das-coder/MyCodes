#  Implement Overidding Concepts
class Animal:
    def sound(self):
        print("Animal is producing sound")
class Dog(Animal):
    def sound(self):
        print("Dog is barking")
a=Animal()
a.sound()
d=Dog()
d.sound() 