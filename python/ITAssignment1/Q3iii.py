# Even odd checking of a no using function.
def isEven(num):
    if num%2==0: return True
    else: return False
n=int(input('Enter a number : '))
if n<0: print('Invalid Input. Enter non-negative no.')
else:
    if isEven(n): print(n,'is even')
    else: print(n,'is odd')