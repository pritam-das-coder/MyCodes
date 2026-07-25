// Write a program in C to implement insertion sort for a user input list (use array). 
#include <stdio.h>
void swap(int* a,int* b){ // function to swap two integers
    int temp=*a;
    *a=*b;
    *b=temp;
}
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){ // iterate from 2nd element to last
        int j=i;
        while(j>=1 && arr[j-1]>arr[j]){ // shift larger elements to right
            swap(&arr[j-1],&arr[j]); // swap adjacent elements
            j--; // move left
        }
    }
}
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n); // input size of array
    int arr[n]; // declare array
    printf("Enter all elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); // input array elements
    }
    insertionSort(arr,n); // call insertion sort
    printf("Sorted Array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]); // print sorted array
    }
    return 0;
}
// Enter the size of array : 8
// Enter all elements of array : 7 6 -1 0 1 11 8 -4
// Sorted Array : 
// -4 -1 0 1 6 7 8 11 
