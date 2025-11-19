// Given an array of integers with 1 to n elements 
// and the size of the array is n+1. One element is 
// occurring more than once i.e duplicate number is 
// present. Find the duplicate element.
#include <stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter all elements of array : ");
    for(int i=0;i<n+1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n+1;j++){
            if(arr[i]==arr[j]){
                printf("The duplicate element is %d",arr[i]);
                break;
            }
        }
    }
    return 0;
}