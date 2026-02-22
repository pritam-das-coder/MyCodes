# Define a class Math with static methods for common mathematical operations like addition, subtraction, 
# multiplication, and division. Also, implement a class method to compute the factorial of a number.
class Math:
    @staticmethod
    def addition(a,b):
        return a+b
    @staticmethod
    def subtraction(a,b):
        return a-b
    @staticmethod
    def multiplication(a,b):
        return a*b
    @staticmethod
    def division(a,b):
        if b==0 :
            print('Invalid Input')
            return
        return a/b
    @classmethod
    def factorial(cls,n):
        if n<0 :
            print('Invalid Input')
            return
        f=1
        for i in range(1,n+1):
            f*=i
        return f
    
def main():
    print('MENU')
    print("1. Addition")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Division")
    print("5. Factorial")
    print("6. Exit")
    m=Math()
    while True :
        ch=int(input('Enter your choice : '))
        match(ch):
            case 1:
                a=int(input('Enter operand 1 : '))
                b=int(input('Enter operand 2 : '))
                print(f"Result : {Math.addition(a,b)}")
            case 2:
                a=int(input('Enter operand 1 : '))
                b=int(input('Enter operand 2 : '))
                print(f"Result : {m.subtraction(a,b)}")
            case 3:
                a=int(input('Enter operand 1 : '))
                b=int(input('Enter operand 2 : '))
                print(f"Result : {m.multiplication(a,b)}")
            case 4:
                a=int(input('Enter operand 1 : '))
                b=int(input('Enter operand 2 : '))
                print(f"Result : {m.division(a,b)}")
            case 5:
                a=int(input('Enter a number : '))
                print(f"Result : {Math.factorial(a)}")
            case 6:
                print('Exiting...')
                break
            case _:
                print('Invalid Input. Try 1-6')

if __name__=='__main__':
    main()