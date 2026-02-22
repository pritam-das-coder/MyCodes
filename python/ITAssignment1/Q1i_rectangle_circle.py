# Program to find area, perimeter of rectangle, circle.
def areaOfRectangle(l,b):
    return l*b
def areaOfCircle(r):
    return 3.14*r*r
def perimeterOfRectangle(l,b):
    return 2*(l+b)
def perimeterOfCircle(r):
    return 2*3.14*r
l=int(input("Enter length of rectangle : "))
b=int(input("Enter breadth of rectangle :"))
r=int(input("Enter radius of circle :"))
print("Area of Rectangle :",areaOfRectangle(l,b))
print("Area of Circle :",areaOfCircle(r))
print("Perimeter of Rectangle :",perimeterOfRectangle(l,b))
print("Perimeter of Circle :",perimeterOfCircle(r))