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
    for(int i=1;i<=(n+1);i++){
        int flag=0;
        for(int j=0;j<n;j++){
            if(arr[j]==i)
                flag=1;
        }
        if(flag==0){
            printf("%d is missing",i);
            break;
        }
    }
    return 0;
}