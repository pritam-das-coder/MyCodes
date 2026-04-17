#include <stdio.h>
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int start,int end){
    int idx=-1;
    int smallEle=0;
    int assumedPivot=(start+end)/2;
    for(int i=start;i<=end;i++){
        if(i==assumedPivot) continue;
        if(arr[i]<arr[assumedPivot]) smallEle++;
    }
    idx=start+smallEle;
    swap(&arr[assumedPivot],&arr[idx]);
    int i=start,j=end;
    while(i<idx && j>idx){
        if(arr[i]>=arr[idx] && arr[j]<arr[idx]){
            swap(&arr[i],&arr[j]);
            i++;
            j--;
        }
        if(arr[i]<arr[idx]) i++;
        if(arr[j]>arr[idx]) j--;
    }
    return idx;
}
void quickSort(int arr[],int start,int end){
    if(start>=end) return;
    int pivot=partition(arr,start,end);
    quickSort(arr,start,pivot-1);
    quickSort(arr,pivot+1,end);
}
int main(){
    int arr[]={10, 5, 8, 9, 1, 7};
    // int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}