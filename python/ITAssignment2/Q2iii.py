# Create a list of 15 no’s and remove i) 1st ele ii) last ele iii) 4th, 7th position   
# iv) any position of a list. 
li=[]
print("Enter 15 numbers : ")
for i in range(15):
    x=int(input())
    li.append(x)
my_list=li.copy()
print(f"Given List : {my_list}")
my_list.pop(0)
print(f"List after removing 1st element : {my_list}")
my_list=li.copy()
my_list.pop()
print(f"List after removing last element : {my_list}")
my_list=li.copy()
my_list.pop(4)
my_list.pop(6)
print(f"List after removing 4th, 7th position element : {my_list}")
my_list=li.copy()
idx=int(input("Enter the index of element to be removed : "))
my_list.pop(idx)
print(f"List after removing {idx} position element : {my_list}")
# Enter 15 numbers : 
# 1
# 4
# 6
# -1
# 34
# 67
# 0
# 2
# 5
# 9
# 11
# 4
# -6
# -54
# 3
# Given List : [1, 4, 6, -1, 34, 67, 0, 2, 5, 9, 11, 4, -6, -54, 3]
# List after removing 1st element : [4, 6, -1, 34, 67, 0, 2, 5, 9, 11, 4, -6, -54, 3]
# List after removing last element : [1, 4, 6, -1, 34, 67, 0, 2, 5, 9, 11, 4, -6, -54]
# List after removing 4th, 7th position element : [1, 4, 6, -1, 67, 0, 5, 9, 11, 4, -6, -54, 3]
# Enter the index of element to be removed : 5
# List after removing 5 position element : [1, 4, 6, -1, 34, 0, 2, 5, 9, 11, 4, -6, -54, 3]
