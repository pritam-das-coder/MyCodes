# Create a program that continuously asks the user for a number. If the user enters a negative number, use continue to skip the processing. If the user enters '0', use break to exit the loop. Otherwise, print the square of the number.

while True:
    n = int(input("Enter a number : "))
    if n<0:
        continue
    if n==0:
        break
    print(n*n)