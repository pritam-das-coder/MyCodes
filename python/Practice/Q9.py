# Write a program that demonstrates tuple unpacking by swapping the values of three different variables without using a temporary fourth variable.

a = 3
b = 7
c = 1

a,c = c,a
c,b = b,c

print(a,b,c,sep=",")