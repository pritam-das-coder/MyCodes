# To generate Prime no’s within 1 to 500.
def isPrime(num):
    if(num==1): return False
    c=0
    for i in range(2,(int)(num/2)+1):
        if num%i==0:
            c=1
            break
    return c==0

for i in range(1,501):
    if isPrime(i)==True:
        print(i,end=' ')
