// Quick Sort
#include <stdio.h>
void swap(int* a,int* b){
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int arr[],int start,int end){
    int c=0;
    int idx=(start+end)/2;
    for(int i=start;i<=end;i++){
        if(i==idx) continue;
        if(arr[i]<=arr[idx]) c++;
    }
    int pivotIdx=start+c;
    swap(&arr[pivotIdx],&arr[idx]);
    int i=start,j=end;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]>arr[pivotIdx] && arr[j]<=arr[pivotIdx]){
            swap(&arr[i],&arr[j]);
            i++;
            j--;
        }
        if(arr[i]<=arr[pivotIdx]) i++;
        if(arr[j]>arr[pivotIdx]) j--;
    }
    return pivotIdx;
}
void quickSort(int arr[],int start,int end){
    if(start>=end) return;
    int pivotIdx=partition(arr,start,end);
    quickSort(arr,start,pivotIdx-1);
    quickSort(arr,pivotIdx+1,end);
}
int main(){
    int n;
    printf("Enter the input size : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter all elements of array : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    quickSort(arr,0,n-1);
    printf("Final Array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}