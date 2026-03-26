# Write a Python script that takes a user's principal amount, interest rate, and time as input, calculates the compound interest, and prints the result formatted to two decimal places.

P = float(input("Enter the principal amount : "))
R = float(input("Enter the interest rate : "))
T = float(input("Enter the time : "))

A = P*((1+(R/100))**T)

print(f"The compound interest is : {A-P:.2f}") # NEW