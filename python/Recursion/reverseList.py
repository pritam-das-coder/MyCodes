def revList(lst):
    i=0
    j=len(lst)-1
    while i<j:
        temp=lst[i]
        lst[i]=lst[j]
        lst[j]=temp
        i+=1
        j-=1
l1=[3,6,1,0,4]
revList(l1)
print(l1)