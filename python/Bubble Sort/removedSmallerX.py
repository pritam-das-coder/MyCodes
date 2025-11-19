def removeAndSort(st,x):
    arr=st.split()
    n=len(arr)
    # remove pairs with value less than x
    for i in range(n-1,0,-2):
        if int(arr[i])<x:
            del (arr[i-1:i+1])
    n=len(arr)
    # sort in decreasing order
    for i in range(1,n-1,2):
        for j in range(1,n-i,2):
            if arr[j]<arr[j+2] or (arr[j]==arr[j+2] and arr[j-1]<arr[j+1]):
                arr[j],arr[j+2]=arr[j+2],arr[j]
                arr[j-1],arr[j+1]=arr[j+1],arr[j-1]
    return " ".join(arr)

st=input()
x=int(input())
print(removeAndSort(st,x))