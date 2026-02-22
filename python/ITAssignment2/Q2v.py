#  Create a 20 elements list and remove Duplicates from list. 
li=[]
print("Enter all 20 elements of list : ")
for i in range(20):
    x=input()
    li.append(x)
i=0
while(i<len(li)):
    j=i+1
    while(j<len(li)):
        if(li[i]==li[j]):
            li.pop(j)
        else: j+=1
    i+=1
print(f"List after removing Duplicates is {li}")
# Enter all 20 elements of list : 
# hi
# 2
# 4
# a
# 12
# 4
# 2
# 2
# 2
# hello
# hi
# 11
# 9
# 3
# 12
# hi
# 9
# 8
# bye
# 4
# List after removing Duplicates is ['hi', '2', '4', 'a', '12', 'hello', '11', '9', '3', '8', 'bye']