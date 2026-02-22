#write your code here
def find_majority(arr):
    n=len(arr)
    t=n//2
    arr.sort()
    print(arr)
    c=1
    ans=-1
    for i in range(n-1):
        if (arr[i] == arr[i+1]):
            c+=1
        else:
            if (c>t):
                ans=arr[i]
                break
            c=1
    return ans

n=int(input())
arr=list(map(int,input().split()))
print(arr)
print(find_majority(arr))
