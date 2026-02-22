# Perform addition, multiplication of matrix. 
def additionOfMatrix(A,B):
    rowA=len(A)
    rowB=len(B)
    colA=len(A[0])
    colB=len(B[0])
    if rowA!=rowB or colA!=colB:
        print("Addition of given matrix not possible")
        return
    res=[]
    for i in range(len(A)):
        row=[]
        for j in range(len(A[0])):
            row.append(A[i][j]+B[i][j])
        res.append(row)
    return res
def multiplicationOfMatrix(A,B):
    res=[]
    rowA=len(A)
    rowB=len(B)
    colA=len(A[0])
    colB=len(B[0])
    if colA!=rowB:
        print("Multiplication of given matrix not possible")
        return
    for i in range(rowA):
        resRow=[]
        for j in range(colB):
            ele=0
            for  k in range(rowB):
                ele+=A[i][k]*B[k][j]
            resRow.append(ele)
        res.append(resRow)
    return res
a=[]
r1=int(input("Enter number of rows of matrix 1 : "))
c1=int(input("Enter number of columns of matrix 1 :"))
print(f"Enter all elements of matrix 1 : ")
for i in range(r1):
    row=[]
    for j in range(c1):
        x=float(input())
        row.append(x)
    a.append(row)
b=[]
r2=int(input("Enter number of rows of matrix 2 : "))
c2=int(input("Enter number of columns of matrix 2 :"))
print(f"Enter all elements of matrix 2 : ")
for i in range(r2):
    row=[]
    for j in range(c2):
        x=float(input())
        row.append(x)
    b.append(row)
print(f"Matrix 1 : {a}")
print(f"Matrix 2 : {b}")
result=[]
result=additionOfMatrix(a,b)
if result!=None:
    print(f"Addition of matrix 1 and 2 is {result}")
result=multiplicationOfMatrix(a,b)
if result!=None:
    print(f"Multiplication of matrix 1 and 2 is {result}")
# Enter number of rows of matrix 1 : 3
# Enter number of columns of matrix 1 :3
# Enter all elements of matrix 1 : 
# 1 
# 3
# 4.2
# 5
# 6
# 9.4
# -11
# -3
# 4
# Enter number of rows of matrix 2 : 3
# Enter number of columns of matrix 2 :3
# Enter all elements of matrix 2 : 
# 4
# .8
# 3
# 1
# -33
# 90
# -21
# 4
# 9.4
# Matrix 1 : [[1.0, 3.0, 4.2], [5.0, 6.0, 9.4], [-11.0, -3.0, 4.0]]
# Matrix 2 : [[4.0, 0.8, 3.0], [1.0, -33.0, 90.0], [-21.0, 4.0, 9.4]]
# Addition of matrix 1 and 2 is [[5.0, 3.8, 7.2], [6.0, -27.0, 99.4], [-32.0, 1.0, 13.4]]
# Multiplication of matrix 1 and 2 is [[-81.2, -81.4, 312.48], [-171.4, -156.4, 643.36], [-131.0, 106.2, -265.4]]
