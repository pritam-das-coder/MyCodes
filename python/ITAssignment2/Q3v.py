# Program to show delete, update, concate operation in tuple.
tup1=(3,5,'India','Hi',345)
tup2=(7,8,'Japan',45.3)
print(f"Tuple 1 : {tup1}")
print(f"Tuple 2 : {tup2}")
# Concatenation
new_tup=tup1+tup2
print(f"New Tuple after concatenation : {new_tup}")
# Updation
list1=list(tup1)
list1[1]=9
tup1=tuple(list1)
print(f"New Tuple 1 after updation : {tup1}")
# Deletion
idx=int(input("Enter the index of element you want to delete from Tuple 2: "))
tup2=tup2[:idx]+tup2[idx+1:]
print(f"New Tuple 2 after delete operation : {tup2}")
# Tuple 1 : (3, 5, 'India', 'Hi', 345)
# Tuple 2 : (7, 8, 'Japan', 45.3)
# New Tuple after concatenation : (3, 5, 'India', 'Hi', 345, 7, 8, 'Japan', 45.3)     
# New Tuple 1 after updation : (3, 9, 'India', 'Hi', 345)
# Enter the index of element you want to delete from Tuple 2: 2
# New Tuple 2 after delete operation : (7, 8, 45.3)