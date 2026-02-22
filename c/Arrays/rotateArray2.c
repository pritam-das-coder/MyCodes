// Rotate the given array ‘a’ by k steps, where k is non-negative.
// Note: k can be greater than n as well where n is the size of array ‘a’.
#include <stdio.h>
void reverse(int a[],int si,int ei){
    for(int i=si,j=ei;i<j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
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
    k = k % n;
    reverse(a,0,n-1);
    reverse(a,0,k-1);
    reverse(a,k,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}