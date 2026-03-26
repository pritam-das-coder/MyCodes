# Create a list of tuples where each tuple contains a student's name and their marks. Sort the list based on the marks in descending order.

lst = [('Pritam Das',98),('Jatin Set',23),('Sayan Saha',99),('Rahul Sen',91),('Piku Da',65)]

n = len(lst)

# Sorting
# for i in range(n):
#     flag = True
#     for j in range(n-1):
#         if lst[j][1]<lst[j+1][1]:
#             lst[j],lst[j+1] = lst[j+1],lst[j]
#             flag = False
#     if flag: break
lst = sorted(lst,reverse=True,key=lambda a:a[1]) # key is a lambda function with argument as each element

print(lst)