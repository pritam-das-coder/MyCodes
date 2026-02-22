# Create a Matrix class in Python that enables matrix multiplication using operator overloading. The class
# should allow users to define matrices of arbitrary dimensions and perform matrix multiplication using
# the '*' operator
class Matrix:
    def __init__(self,matrix):
        self.matrix=matrix
    def __mul__(self,O):
        if isinstance(O,Matrix):
            a=self.matrix
            b=O.matrix
            r1=len(a)
            c1=len(a[0])
            r2=len(b)
            c2=len(b[0])
            assert (c1==r2),"This two matrix can't be multiplied"
            res=[]
            for i in range(r1):
                l=[]
                for j in range(c2):
                    x=0
                    for k in range(r2):
                        x+=a[i][k]*b[k][j]
                    l.append(x)
                res.append(l)
            return Matrix(res)
        elif isinstance(O,(int,float)):
            a=self.matrix
            r1=len(a)
            c1=len(a[0])
            res=[]
            for i in range(r1):
                l=[]
                for j in range(c1):
                    l.append(a[i][j]*O)
                res.append(l)
            return Matrix(res)
        else:
            return NotImplemented
    def __rmul__(self,O):
        return self*O
    def __str__(self):
        return str(self.matrix)
    
mat1=Matrix([[3,1,0],[3,2,-1]])
mat2=Matrix([[1,1],[2,3],[0,2]])
print(mat1*mat2)
print(mat1*2.5)
print(3*mat1)