# Write a Python program that takes a dictionary as input and returns a new dictionary with the keys and
# values swapped
my_dict={}
# Input the dict
n=int(input('Enter number of key-value to be inputted : '))
for i in range(n):
    key=input(f"Enter key {i+1} : ")
    value=input(f"Enter value {i+1} : ")
    my_dict[key]=value
print(my_dict)
# Make a new dict and initialise it to my_dict
new_dict={}
for key,value in my_dict.items():
    new_dict[value]=key
my_dict=new_dict
print(my_dict)
