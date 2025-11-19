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
    int brr[n+1]; // visited array
    for(int i=0;i<n+1;i++){
        brr[i]=0;
    }
    for(int i=0;i<n+1;i++){
        int idx=arr[i];
        if(brr[idx]==0){
            brr[idx]=1;
        }
        else{
            printf("The duplicate element is %d",idx);
            break;
        }
    }
    return 0;
}