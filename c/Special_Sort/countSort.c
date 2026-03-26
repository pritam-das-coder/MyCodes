// TC=O(n+mx) mx-> max element
// SC=O(n+mx)
#include <stdio.h>
void countSort(int arr[],int n){
    // find max element
    int mx=arr[0];
    for(int i=1;i<n;i++){
        if(mx<arr[i]) mx=arr[i];
    }
    // store frequency of each element in cntArr
    int cntArr[mx+1];
    for(int i=0;i<=mx;i++){
        cntArr[i]=0;
    }
    for(int i=0;i<n;i++){
        cntArr[arr[i]]++;
    }
    // make prefix sum(cumulative frequency)
    for(int i=1;i<=mx;i++){
        cntArr[i]+=cntArr[i-1];
    }
    // make the ans array
    int ans[n];
    for(int i=n-1;i>=0;i--){
        ans[--cntArr[arr[i]]]=arr[i];
    }
    // fill ans to arr
    for(int i=0;i<n;i++){
        arr[i]=ans[i];
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[] = {2, 5, 3, 0, 2, 3, 0, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    countSort(arr,n);
    print(arr,n);
}