// Calculate the sum of all the elements in the given array.
// Calculate the product of all the elements in the given array.
#include <stdio.h>
int main(){
    // int arr[5],sum=0;
    // printf("Enter 5 numbers : ");
    // for(int i=0;i<5;i++){
    //     scanf("%d",&arr[i]);
    //     sum+=arr[i];
    // }
    // printf("Required sum = %d",sum);
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n],p=1;
    printf("Enter elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        p*=arr[i];
    }
    printf("Required product = %d",p);
    return 0;
}