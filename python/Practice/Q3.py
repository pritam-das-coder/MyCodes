# Write a program to print all prime numbers between 1 and 100. Use a for loop and the break statement to optimize the inner loop.

for i in range(2,101):
    flag = True
    for j in range(2,i):
        if(i%j==0):
            flag = False
            break
    if(flag):
        print(i,end=" ")