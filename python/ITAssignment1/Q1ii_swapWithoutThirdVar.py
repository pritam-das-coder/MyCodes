# Swap two numbers using and without using third variable.
a=int(input("Enter 1st number : "))
b=int(input("Enter 2nd number : "))
print("Before swapping : ")
print(a,b)
# a,b=b,a
a=a+b
b=a-b
a=a-b
print("After swapping : ")
print(a,b)