# Find gcd, lcm using function.
def findGCD(a,b):
    if b==0: return a
    return findGCD(b,a%b)
def findLCM(a,b):
    lcm=0
    for i in range(max(a,b),(a*b)+1):
        if i%a==0 and i%b==0:
            lcm=i
            break
    return lcm
a=int(input('Enter the 1st number : '))
b=int(input('Enter the 2nd number : '))
gcd=findGCD(a,b)
lcm=findLCM(a,b)
print(f'GCD of {a} and {b} is {gcd}')
print(f'LCM of {a} and {b} is {lcm}')