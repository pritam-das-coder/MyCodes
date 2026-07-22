# Generate Fibonacci series using Function.
def fibo(n): # find nth term of Fibonacci series
    if n<=2: return 1
    else: return fibo(n-1)+fibo(n-2)
n=int(input('Enter no. of terms to be printed : '))
for i in range(1,n+1):
    print(fibo(i),end=' ')
    