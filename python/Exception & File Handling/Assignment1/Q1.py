# Implement a temperature converter program in Python that converts Celsius to Fahrenheit and vice
# versa. However, include exception handling to handle cases where the user enters invalid input (e.g.,
# non-numeric values or out-of-range temperatures):
class InvalidRangeOfTemp(RuntimeError):
    def __init__(self,a):
        self.a=a
try:
    print("MENU")
    print("1. Celsius to Fahrenheit Conversion")
    print("2. Fahrenheit to Celsius Conversion")
    ch=int(input("Enter your choice : "))
    match ch:
        case 1:
            print("Enter temperature in Celsius : ")
            c=float(input())
            if (c<-273.15):
                raise InvalidRangeOfTemp("Celcius")
            f=1.8*c+32
            print(f"Temperature in Fahrenheit is {f}")
        case 2:
            print("Enter temperature in Fahrenheit : ")
            f=float(input())
            if (f<-459.67):
                raise InvalidRangeOfTemp("Fahrenheit")
            c=(5*(f-32))/9
            print(f"Temperature in Celsius is {c}")
        case _:
            print("Invalid choice!")
except ValueError:
    print("Invalid value entered.")
except InvalidRangeOfTemp as i:
    print(f"Entered temperature does not belong to {i.a} scale.")