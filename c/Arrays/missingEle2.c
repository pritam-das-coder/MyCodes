// Given an array containing elements from 1 to 100(5) except one element in this range is missing. 
// Find the missing element.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum1=((n+1)*(n+2))/2;
    int sum2=0;
    for(int i=0;i<n;i++){
        sum2+=arr[i];
    }
    printf("The missing element is %d",(sum1-sum2));
    return 0;
}