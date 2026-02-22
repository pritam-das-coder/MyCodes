#    A 
#   B B
#  C C C
# D D D D
n=int(input('Enter no. of lines : '))
for i in range(1,n+1):
    for s in range(1,n-i+1):
        print(' ',end='')
    for j in range(1,i+1):
        print(chr(64+i),end=' ')
    print()
