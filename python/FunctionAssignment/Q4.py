# Write a Python program to print the Fibonacci series up to n terms using a function
def fibo(n):
    if n<=2: return 1
    return fibo(n-1)+fibo(n-2)
n=int(input("Enter number of terms : "))
for i in range(n):
    print(fibo(i+1),end=" ")