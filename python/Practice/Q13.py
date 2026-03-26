# Write a recursive function to compute the n-th number in the Fibonacci sequence.

def fibo(n):
    if n<=2:
        return 1
    return fibo(n-1)+fibo(n-2)

n = int(input("Enter a number : "))
print(fibo(n))