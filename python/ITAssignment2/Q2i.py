# Perform  extend, sort, copy operation in a given list show in detail. 
li1=[3,7,13,5,-1,11,13]
li2=[-4,100,34]
print(f"List 1 before operation : {li1}")
print(f"List 2 before operation : {li2}")
li1.extend(li2)
print(f"List 1 after extend operation : {li1}")
print(f"List 2 after extend operation : {li2}")
li1.sort()
print(f"List 1 after sort operation : {li1}")
li1_copy=li1.copy()
print(f"List made by copying List 1 : {li1_copy}")
# List 1 before operation : [3, 7, 13, 5, -1, 11, 13]
# List 2 before operation : [-4, 100, 34]
# List 1 after extend operation : [3, 7, 13, 5, -1, 11, 13, -4, 100, 34]
# List 2 after extend operation : [-4, 100, 34]
# List 1 after sort operation : [-4, -1, 3, 5, 7, 11, 13, 13, 34, 100]
# List made by copying List 1 : [-4, -1, 3, 5, 7, 11, 13, 13, 34, 100]