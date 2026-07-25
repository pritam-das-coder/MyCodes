// Write a program in C to implement Merge sort for a user input list (use array). 
#include <stdio.h>
void merge(int a[],int n,int b[],int m,int c[]){
    int i=0,j=0,k=0; // pointers for arrays a, b and merged c
    while(i<n && j<m){ // compare elements from both halves
        if(a[i]<b[j]){
            c[k]=a[i]; // take element from left half
            i++,k++;
        }
        else{
            c[k]=b[j]; // take element from right half
            j++,k++;
        }
    }
    while(i<n){ // copy remaining elements from left half
        c[k]=a[i];
        k++,i++;
    }
    while(j<m){ // copy remaining elements from right half
        c[k]=b[j];
        k++,j++;
    }
}
void mergeSort(int arr[],int n){
    if(n==1) return; // base case: single element is sorted
    int leftSize=n/2; // size of left subarray
    int rightSize=n-n/2; // size of right subarray
    int a[leftSize],b[rightSize]; // temporary arrays
    int i=0,k=0,j=0;
    while(i<leftSize){ // copy first half into a[]
        a[k++]=arr[i++];
    }
    while(i<n){ // copy second half into b[]
        b[j++]=arr[i++];
    }
    mergeSort(a,leftSize); // recursively sort left half
    mergeSort(b,rightSize); // recursively sort right half
    merge(a,leftSize,b,rightSize,arr); // merge sorted halves back into arr
}
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n); // input array size
    int arr[n];
    printf("Enter all elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); // input array elements
    }
    mergeSort(arr,n); // call merge sort
    printf("Sorted Array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]); // print sorted array
    }
    return 0;
}
// Enter the size of array : 10
// Enter all elements of array : 23 45 -12 0 1034 2 -99 6 43 1
// Sorted Array : 
// -99 -12 0 1 2 6 23 43 45 1034