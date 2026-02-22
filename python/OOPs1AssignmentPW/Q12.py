# Write a Python program to create a calculator class. Include methods for basic arithmetic operations
class Calculator:
    def __init__(self,op1,op2):
        self.op1=op1
        self.op2=op2
    def add(self):
        return self.op1+self.op2
    def subtract(self):
        return self.op1-self.op2
    def multiply(self):
        return self.op1*self.op2
    def division(self):
        return self.op1/self.op2
    
def main():
    calc=Calculator(34,10)
    print(f'{calc.op1} + {calc.op2} = {calc.add()}')
    print(f'{calc.op1} - {calc.op2} = {calc.subtract()}')
    print(f'{calc.op1} * {calc.op2} = {calc.multiply()}')
    print(f'{calc.op1} / {calc.op2} = {calc.division()}')

if __name__ == '__main__':
    main()
    
