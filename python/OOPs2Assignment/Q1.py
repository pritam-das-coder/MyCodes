# Implement an abstract class Shape with an abstract method calculate_area(). Create subclasses such 
# as Rectangle and Circle that inherit from Shape and override the calculate_area() method to calculate 
# the area of their respective shapes
import math
from abc import ABC,abstractmethod
class Shape(ABC):
    @abstractmethod
    def calculate_area(self):
        pass

class Rectangle(Shape):
    def __init__(self,length,breadth):
        self.length=length
        self.breadth=breadth
    def calculate_area(self):
        return (self.length*self.breadth)
    
class Circle(Shape):
    def __init__(self,radius):
        self.radius=radius
    def calculate_area(self):
        return (math.pi*(self.radius**2))
    
r = Rectangle(3,5)
c = Circle(2)

print(f"Area of Rectangle : {r.calculate_area()}")
print(f"Area of Circle : {c.calculate_area()}")