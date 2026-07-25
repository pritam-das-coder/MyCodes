#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[]={0,1,5,7,8,12};//ascending order
    int key=17;
    int first=0,last=6-1,mid=0;
    bool flag=false;
    while(first<=last){
        mid=(first+last)/2;
        if(arr[mid]==key){
            flag=true;
            printf("Element found at index %d",mid);
            break;
        }
        else if(arr[mid]>key)
            last=mid-1;
        else
            first=mid+1;
    }
    if(flag==false)
        printf("Element not found");
    return 0;
}