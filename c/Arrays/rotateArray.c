// Rotate the given array ‘a’ by k steps, where k is non-negative.
// Note: k can be greater than n as well where n is the size of array ‘a’.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    printf("Enter a number : ");
    scanf("%d",&k);
    if(k<0){
        printf("Invalid Input! Enter a non-negative number.");
        return 0;
    }
    while(k>=n){
        k=k-n;
    }
    for(int j=1;j<=k;j++){
        int temp=a[n-1];
        for(int i=n-1;i>=1;i--){
            a[i]=a[i-1];
        }
        a[0]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}