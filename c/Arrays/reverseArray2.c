// Write a program to reverse the array without using any extra array.
#include <stdio.h>
void reverse(int a[],int n){
    // int i=0,j=n-1;
    // while(i<j){
    //     int temp=a[i];
    //     a[i]=a[j];
    //     a[j]=temp;
    //     i++;
    //     j--;
    // }
    for(int i=0,j=n-1;i<j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
    printf("Reverse Array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}