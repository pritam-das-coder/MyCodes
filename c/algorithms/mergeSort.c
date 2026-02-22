#include <stdio.h>
void merge(int arr[],int start,int mid,int end){
    int temp[end-start+1];
    int index=0,i=start,j=mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp[index]=arr[i];
            i++,index++;
        }
        else{
            temp[index]=arr[j];
            j++,index++;
        }
    }
    while (i<=mid){
        temp[index]=arr[i];
        i++,index++;
    }
    while(j<=end){
        temp[index]=arr[j];
        j++,index++;
    }
    index=0;
    while(start<=end){
        arr[start]=temp[index];
        start++;
        index++;
    }
}
void mergesort(int arr[],int start,int end){
    if(start==end) return;
    int mid=(start+end)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
int main(){
    int arr[]={4,1,9,0,16,-1,-7,4,0};
    mergesort(arr,0,8);
    for(int i=0;i<9;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}