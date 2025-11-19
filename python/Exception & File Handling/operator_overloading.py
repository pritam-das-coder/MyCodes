# print(2*3)
# print("Pritam"*3)

# print(2+3)
# print("Pritam"+"Das")

# a=2+5j
# b=4+3j
# print(a+b)

# class Num:
#     def __init__(self,n):
#         self.n=n
#     def __add__(self,O):
#         return self.n+O.n
    
# num1=Num(20)
# num2=Num(3)
# print(num1+num2)

class ComplexNum:
    def __init__(self,x,y):
        self.x=x
        self.y=y
    def __add__(self,O):
        r=self.x+O.x
        i=self.y+O.y
        return r,i
    def __sub__(self,O):
        r=self.x-O.x
        i=self.y-O.y
        return r,i
    
c1=ComplexNum(2,3)
c2=ComplexNum(3,6)
print(c1-c2)

# class ComparisonOverload:
#     def __init__(self,x):
#         self.x=x
#     def __gt__(self,O):
#         if self.x>O.x:
#             return True
#         else:
#             return False
        
# c1=ComparisonOverload(12)
# c2=ComparisonOverload(5)
# print(c1>c2)