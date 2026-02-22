# Perform Removal of all occurrences of a specific item from a list. 
my_list=['this','is','my','is','string','is','hello','this']
print(f"List : {my_list}")
ele=input("Enter the element to be removed : ")
count=0
for i in range(len(my_list)):
    if (ele==my_list[i]):
        count+=1
for i in range(count):
    my_list.remove(ele)
print(f"List after removal of all occurrences of \'{ele}\' is {my_list}")
# List : ['this', 'is', 'my', 'is', 'string', 'is', 'hello', 'this']
# Enter the element to be removed : is   
# List after removal of all occurrences of 'is' is ['this', 'my', 'string', 'hello', 'this']