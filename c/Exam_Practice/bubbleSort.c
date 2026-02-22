#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[]={1,8,3,-1,0,12};
    int n=6;
    for(int i=0;i<n-1;i++){
        bool flag=true;//sorted
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                flag=false;
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        if(flag)
            break;
    }
    printf("Sorted array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}