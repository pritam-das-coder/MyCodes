li1=input().split()
n=li1[0]
k=li1[1]
arr=input().split()
v=[]
for i in arr:
    x=int(i)
    v.append(x)
nn=0
for ele in v:
    if ele<0: nn+=1
if nn==k:
    for i in range(0,n):
        if v[i]<0: 
            v[i]=(-1)*v[i]


print(v)