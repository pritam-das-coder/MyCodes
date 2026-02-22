# Check no is Armstrong or not.
def isArmstrong(str):
    l=len(str) # number of digits
    sum=0
    for i in str:
        d=int(i)
        sum+=d**l
    if(sum==int(str)): return True
    else: return False
str=input('Enter a number : ')
if isArmstrong(str): print(str,'is an Armstrong Number')
else: print(str,'is not an Armstrong Number')

