#include <stdio.h>
int  main(){
    int target=12;
    int arr[]={2,3,3,5,7,9,12,14};
    int size=sizeof(arr)/sizeof(arr[1]);
    for(int i=0,j=size-1;i<j;){
        if(arr[i]+arr[j]==target){
            printf("%d %d\n",arr[i],arr[j]);
            break;
        }
        else if(arr[i]+arr[j]>target){
            j--;
        }
        else{
            i++;
        }
    }
    return 0;
}