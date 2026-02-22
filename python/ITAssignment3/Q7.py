# Implement Polymorphism in python
class FlyBird:
    def fly(self,b):
        print(f"{b.nameOfBird()} is flying")

class Sparrow:
    def nameOfBird(self):
        return "Sparrow"
    
class Parrot:
    def nameOfBird(self):
        return "Parrot"
    
f=FlyBird()
s=Sparrow()
p=Parrot()
f.fly(s)
f.fly(p)