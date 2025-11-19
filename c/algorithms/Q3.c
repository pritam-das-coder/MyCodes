// Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of 
// two numbers formed from digits of the array. Please note that all digits of the given array must 
// be used to form the two numbers.
#include <stdio.h>
#include <stdbool.h>
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int findNoFromArray(int arr[],int n){
    int num=0,f=1;
    for(int i=n-1;i>=0;i--){
        num+=f*arr[i];
        f*=10;
    }
    return num;
}
int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // bubble sort
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                flag=false;
                swap(&arr[j],&arr[j+1]);
            }
        }
        if(flag==true) break;
    }
    int smallest=findNoFromArray(arr,n);
    int secondsmallest=smallest;
    for(int i=n-1;i>0;i--){
        if(smallest==secondsmallest){
            swap(&arr[i],&arr[i-1]);
            secondsmallest=findNoFromArray(arr,n);
        }
    }
    printf("SMALLEST NUMBER : %d\n",smallest);
    printf("SECOND SMALLEST NUMBER : %d\n",secondsmallest);
    printf("REQUIRED SUM : %d\n",smallest+secondsmallest);
    return 0;
}