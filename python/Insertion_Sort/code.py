def insertion_sort(arr):
    n=len(arr)
    for i in range(1,n):
        j=i
        while j>=1 and arr[j]<arr[j-1]:
            arr[j],arr[j-1]=arr[j-1],arr[j]
            j-=1
arr=[12,-11,136,5,6]
insertion_sort(arr)
print(*arr)