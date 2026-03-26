// TC=O(n*l) l-> no. of digits in max element
// SC=O(n)
#include <stdio.h>
void countSort(int arr[],int n,int pos){
    // store frequency of each element in cntArr
    int cntArr[10];
    for(int i=0;i<10;i++){
        cntArr[i]=0;
    }
    for(int i=0;i<n;i++){
        cntArr[(arr[i]/pos)%10]++;
    }
    // make prefix sum(cumulative frequency)
    for(int i=1;i<10;i++){
        cntArr[i]+=cntArr[i-1];
    }
    // make the ans array
    int ans[n];
    for(int i=n-1;i>=0;i--){
        ans[--cntArr[(arr[i]/pos)%10]]=arr[i];
    }
    // fill ans to arr
    for(int i=0;i<n;i++){
        arr[i]=ans[i];
    }
}
void radixSort(int arr[],int n){
    // find max element
    int mx=arr[0];
    for(int i=1;i<n;i++){
        if(mx<arr[i]) mx=arr[i];
    }
    // sort based on position starting from one's pos
    for(int pos=1;mx/pos>0;pos*=10){
        countSort(arr,n,pos);
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    radixSort(arr,n);
    print(arr,n);
}