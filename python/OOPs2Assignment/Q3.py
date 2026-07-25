# Define a class Calculator with overloaded methods add() to perform addition with different numbers of 
# arguments. Test the calculator by adding numbers using different numbers of arguments
class Calculator:
    def add(self,*args):
        sum=0
        for i in args:
            sum+=i
        return sum
    
c = Calculator()
print(f'2 + 3 = {c.add(2,3)}')
print(f'2 + 3 + 4 = {c.add(2,3,4)}')
print(f'2 + 3 + 4 + 8 = {c.add(2,3,4,8)}')