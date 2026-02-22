#  Show insert, append operation of a list. 
li=[4,5,1,-3]
print(f"Original List : {li}")
li.insert(2,'a')
print(f"List after insert operation : {li}")
li.append(3.45)
print(f"List after append operation : {li}")
# Original List : [4, 5, 1, -3]
# List after insert operation : [4, 5, 'a', 1, -3]
# List after append operation : [4, 5, 'a', 1, -3, 3.45]
