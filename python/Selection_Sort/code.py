def selection_sort(arr):
    n=len(arr)
    for i in range(n-1):
        min_pos=i
        for j in range(i+1,n):
            if arr[min_pos]>arr[j]:
                min_pos=j
        arr[i],arr[min_pos]=arr[min_pos],arr[i]
arr=[64,25,172,22,101]
selection_sort(arr)
print(*arr)