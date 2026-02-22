# Python Program to add all elements to list upto 100 which are divisible by 10.
def addElements(my_list):
    for i in range(10,101,10):
        my_list.append(i)
    return my_list
li=[]
addElements(li)
print(f"List made after adding required elements : {li}")
# List made after adding required elements : [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]