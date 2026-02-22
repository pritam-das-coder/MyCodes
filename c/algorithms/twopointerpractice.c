// Given an array of integers numbers that is 
// already sorted in non-decreasing order, find two 
// numbers such that they add up to a specific target 
// number.
#include <stdio.h>
int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter all elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter target : ");
    int target;
    scanf("%d",&target);
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            printf("(%d,%d)",arr[i],arr[j]);
            break;
        }
        else if(arr[i]+arr[j]>target){
            j--;
        }
        else{
            i++;
        }
    }
    return 0;
}