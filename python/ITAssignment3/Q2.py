# Linear and binary search in python
def linearSearch(a,target):
    f=0
    c=0
    for i in a:
        if(target==i):
            f=1
            print(f"{target} found at {c}")
            break
        c+=1
    if(f==0):
        print(f"{target} not found")

def binarySearch(a,target):
    i=0
    j=len(a)-1
    while(i<j):
        mid=(i+j)//2
        if(a[mid]==target):
            print(f"{target} found at {mid}")
            return
        elif(a[mid]<target): i=mid+1
        else: j=mid-1
    print(f"{target} not found")


n=int(input("Enter size of list : "))
l=[]
print("Enter all elements : ")
for i in range(n):
    x=int(input())
    l.append(x)
target=int(input("Enter target : "))
binarySearch(l,target)
