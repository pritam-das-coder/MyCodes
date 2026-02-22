# Create a base class Vehicle with a method drive(). Define subclasses like Car and Motorcycle that inherit 
# from Vehicle and override the drive() method to provide their own implementation of vehicle driving.
class Vehicle:
    def drive(self):
        print('I am driving a Vehicle')

class Car(Vehicle):
    def drive(self):
        print('I am driving a Car')

class Motorcycle(Vehicle):
    def drive(self):
        print('I am driving a Motorcycle')

def main():
    v = Vehicle()
    c = Car()
    m = Motorcycle()

    v.drive()
    c.drive()
    m.drive()

if __name__ == '__main__' :
    main()