# Write a program that uses an anonymous (lambda) function alongside the built-in filter() and map() functions to extract all even numbers from a list and then square them.

lst = [1,3,4,8,14,2,7,13,0]

even = list(filter(lambda n: n%2==0,lst)) # To extract some elements based on given function
ans = list(map(lambda n: n*n,even)) # To apply given function on all the elements

print(ans)