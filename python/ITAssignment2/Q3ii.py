# Tuple of 15 no’s and find max and min element from it. 
my_tuple=(3,6.7,1,7,8,1,3,22.3,1083,-349,5.56,11,12,99,-12)
print(f"Tuple Created : {my_tuple}")
max=float("-inf")
min=float("inf")
for i in my_tuple:
    if(max<i): max=i
    if(min>i): min=i
print(f"Maximum element is : {max}")
print(f"Minimum element is : {min}")
# Tuple Created : (3, 6.7, 1, 7, 8, 1, 3, 22.3, 1083, -349, 5.56, 11, 12, 99, -12)    
# Maximum element is : 1083
# Minimum element is : -349