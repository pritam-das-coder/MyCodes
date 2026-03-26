# Create a program that uses the random module to generate 50 random integers and the math module to find the GCD (Greatest Common Divisor) of the first two numbers in that generated list.

import random
import math

lst = []
for i in range(50):
    n = random.randint(1,50)
    lst.append(n)

print(lst)

print(math.gcd(lst[0],lst[1]))
