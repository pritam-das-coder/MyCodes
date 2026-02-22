#  Check whether a matrix is triangular and also check symmetric or not. 
def isTriangular(A):
    rowA=len(A)
    colA=len(A[0])
    flag=True
    for i in range(rowA):
        for j in range(i):
            if A[i][j]!=0:
                flag=False
    if flag: return flag
    flag=True
    for i in range(rowA):
        for j in range(i+1,colA):
            if A[i][j]!=0:
                flag=False
                return flag
    return flag

def isSymmetric(A):
    rowA=len(A)
    colA=len(A[0])
    flag=True
    for i in range(rowA):
        for j in range(i):
            if(A[i][j]!=A[j][i]):
                flag=False
                break
    return flag

li=[]
r=int(input("Enter number of rows of matrix : "))
c=int(input("Enter number of columns of matrix :"))
print(f"Enter all elements of matrix : ")
for i in range(r):
    row=[]
    for j in range(c):
        x=float(input())
        row.append(x)
    li.append(row)
print(f"My List is {li}")
if isTriangular(li)==True:
    print("Given Matrix is Triangular")
else:
    print("Given Matrix is not Triangular")
    
if isSymmetric(li):
    print("Given Matrix is Symmetric")
else:
    print("Given Matrix is not Symmetric")
# Enter number of rows of matrix : 3
# Enter number of columns of matrix :3
# Enter all elements of matrix : 
# 1
# 7
# 3
# 7
# 4
# -5
# 3
# -5
# 6
# My List is [[1.0, 7.0, 3.0], [7.0, 4.0, -5.0], [3.0, -5.0, 6.0]]
# Given Matrix is not Triangular
# Given Matrix is Symmetric
