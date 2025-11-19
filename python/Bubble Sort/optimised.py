def sort(arr):
    n=len(arr)
    c=0
    for i in range(n-1):
        flag=True
        for j in range(n-i-1):
            if (arr[j]>arr[j+1]):
                flag=False
                arr[j],arr[j+1]=arr[j+1],arr[j]
                c+=1
        if flag==True:
            break
    print(c)
#arr=[6,5,4,3,2,1]
arr=[1,2,3,4,5,6]
sort(arr)
print(arr)
