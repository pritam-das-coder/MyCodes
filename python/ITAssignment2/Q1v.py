#  Generate even and odd set of no’s separated from a given list. 
def separate_even_odd(l):
    even_list=set()
    odd_list=set()
    for i in l:
        if i%2==0:
            even_list.add(i)
        else:
            odd_list.add(i)
    return even_list,odd_list
my_list=[]
n=int(input("Enter size of list : "))
print("Enter all elements of list : ")
for i in range(n):
    x=int(input())
    my_list.append(x)
even,odd=separate_even_odd(my_list)
print(f"Even set from given list : {even}")
print(f"Odd set from given list : {odd}")
# Enter size of list : 10
# Enter all elements of list :
# 2
# 5
# 9
# 1
# 0
# 5
# 2
# 6
# 7
# 103
# Even set from given list : {0, 2, 6}        
# Odd set from given list : {1, 5, 103, 7, 9}