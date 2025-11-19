// Find the maximum value out of all the elements in the array.
#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(min>arr[i])
            min=arr[i];
    }
    printf("The minimum value out of all the element is %d",min);
    // int a=INT_MAX;
    // printf("%d",a);
    return 0;
}