# A positive integer n is a sum of squares if n = i2 + j2 for integers i,j such that i ≥
# 1 and j ≥ 1. For instance, 10 is a sum of squares because 10 = 12
# + 32, and so is 25(32+ 42). 
# On the other hand, 11 and 3 are not sums of squares.
# Write a Python function sumofsquares(n) that takes a positive integer argument and
# returns True if the integer is a sum of squares, and False otherwise.
import math
def isPerfect(n):
    sr=math.sqrt(n)
    if int(sr)==sr: return True
    else: return False
def sumofsquares(n):
    i=1
    j=n-1
    while(i<j):
        if isPerfect(i) and isPerfect(j):
            return True
        elif isPerfect(i): 
            j=int(math.sqrt(j))**2
            i=n-j
        else:
            i=(int(math.sqrt(i)+1))**2
            j=n-i
    return False
n=int(input("Enter a number : "))
if n<=0: print("Invalid Input")
else:
    print(sumofsquares(n))

