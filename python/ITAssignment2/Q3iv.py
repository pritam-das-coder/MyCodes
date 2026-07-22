# Implement idea of nested tuples.
nested_tuple=((1,2,3),(4,5),(7,8,6),(4,))
row=len(nested_tuple)
print("Printing the nested tuple :")
for i in range(row):
    col=len(nested_tuple[i])
    for j in range(col):
        print(nested_tuple[i][j],end=" ")
    print()
# Printing the nested tuple :
# 1 2 3
# 4 5
# 7 8 6
# 4