#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[]={8,3,-1,13,4,17};
    int n=6;
    for(int i=0;i<n-1;i++){
        int min=arr[i],pos=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                pos=j;
            }
        }
        arr[pos]=arr[i];
        arr[i]=min;
    }
    printf("Sorted array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}