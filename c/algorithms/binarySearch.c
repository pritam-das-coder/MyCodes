#include <stdio.h>
#include <stdbool.h>
int main(){
    int e;
    printf("Enter the element to be searched : ");
    scanf("%d",&e);
    int arr[]={12,15,20,36,42,55,60,83,92};
    int first=0,last=(sizeof(arr)/4)-1,mid=0;
    bool flag=false;
    while(first<=last){
        mid=(first+last)/2;
        if(arr[mid]==e){
            printf("Found at index : %d",mid);
            flag=true;
            break;
        }
        else if(arr[mid]<e)
            first=mid+1;
        else
            last=mid-1;
    }
    if(flag==false)
        printf("%d not found",e);
    return 0;
}