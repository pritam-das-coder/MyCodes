# Check whether a no is power of 3, power of 2 or not.
import math
num=int(input('Enter a number : '))
x=math.log(num,3)
y=math.log(num,2)
if x==int(x):
    print(num,'is a power of 3')
elif y==int(y):
    print(num,'is a power of 2')
else:
    print(num,'is neither power of 2 nor 3')