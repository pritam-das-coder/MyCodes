def moveZeroToEnd(arr): # TC=O(n^2) SC=O(1)
    nz=0
    for i in arr:
        if i==0:
            nz+=1
    n=len(arr)
    for i in range(nz):
        for j in range(n-1-i):
            if arr[j]==0 and arr[j+1]!=0:
                arr[j],arr[j+1]=arr[j+1],arr[j]
def moveZeroToEnd2(arr): # TC=O(n) SC=O(n)
    n=len(arr)
    ans=[0]*n
    j=0
    for i in range(n):
        if(arr[i]!=0):
            ans[j]=arr[i]
            j+=1
    for i in range(n):
        arr[i]=ans[i]
arr=[1,2,0,4,3,0,5,0]
moveZeroToEnd2(arr)
print(arr)
# n=7
# temp=[0]*n
# print(temp)