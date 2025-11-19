#  Program of swap two values using tuples. 
a=float(input("Enter a : "))
b=float(input("Enter b : "))
print(f"Before swapping : a={a} b={b}")
a,b=b,a
print(f"After swapping : a={a} b={b}")
# Enter a : 2.6
# Enter b : 52
# Before swapping : a=2.6 b=52.0
# After swapping : a=52.0 b=2.6
