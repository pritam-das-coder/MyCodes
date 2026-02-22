#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[]={1,8,3,-1,0,12};
    int n=6;
    for(int i=1;i<n;i++){
        int j=i;
        while(arr[j]<arr[j-1]&&j>=1){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    printf("Sorted array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}