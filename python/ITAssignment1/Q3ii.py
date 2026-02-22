# Program to compute P(n,r) with recursive function.
def findFactorial(n):
    if n==0: return 1
    return n*findFactorial(n-1)
n=int(input('Enter the n of P(n,r) : '))
r=int(input('Enter the r of P(n,r) : '))
permutation=findFactorial(n)/findFactorial(n-r)
print(f'P({n},{r})={permutation}')