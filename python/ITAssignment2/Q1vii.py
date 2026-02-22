#  Perform transpose of a given matrix. 
def transpose(A):
    res=[]
    rowA=len(A)
    colA=len(A[0])
    for i in range(colA):
        resRow=[]
        for j in range(rowA):
            resRow.append(A[j][i])
        res.append(resRow)
    return res


l1=[]
r=int(input("Enter number of rows of matrix : "))
c=int(input("Enter number of columns of matrix :"))
print(f"Enter all elements of matrix : ")
for i in range(r):
    row=[]
    for j in range(c):
        x=float(input())
        row.append(x)
    l1.append(row)
print(f"Transpose of {l1} is : ")
print(transpose(l1))
# Enter number of rows of matrix : 3
# Enter number of columns of matrix :2
# Enter all elements of matrix : 
# 1
# 0.3
# 2
# -23
# 1.4
# 5
# Transpose of [[1.0, 0.3], [2.0, -23.0], [1.4, 5.0]] is :
# [[1.0, 2.0, 1.4], [0.3, -23.0, 5.0]]
