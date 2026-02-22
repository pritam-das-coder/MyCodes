# Generate Fibonacci Series using list concepts. 
fibo_list=[]
def fibonacci(l,n):
    if n<=2:
        l.append(1)
    else:
        size=len(l)
        x=l[size-1]+l[size-2]
        l.append(x)
n=int(input("Enter number of terms of fibonacci series : "))
for i in range(1,n+1):
    fibonacci(fibo_list,i)
print(f"List of {n} elements of Fibonacci Series is {fibo_list}")
# Enter number of terms of fibonacci series : 10
# List of 10 elements of Fibonacci Series is [1, 1, 2, 3, 5, 8, 13, 21, 34, 55]