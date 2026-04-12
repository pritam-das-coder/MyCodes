// Binary search using divide and conquer
#include <stdio.h>
int bs(int arr[],int lo,int hi,int ele){ // returns index of ele ,if not found return -1
    if(lo>hi) return -1;
    int mid=lo-((lo-hi)/2);
    if(arr[mid]==ele){
        return mid;
    }
    else if(arr[mid]>ele){
        return bs(arr,lo,mid-1,ele);
    }
    else return bs(arr,mid+1,hi,ele);
}
int main() {
    int n,ele;
    printf("Enter input size : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter all elements of array : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be searched : ");
    scanf("%d",&ele);
    printf("Element found at index %d\n",bs(arr,0,n-1,ele));
}