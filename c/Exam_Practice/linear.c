#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[]={3,7,1,9,-1,2};//ascending order
    int key=-1;
    bool flag=false;
    for(int i=0;i<6;i++){
        if(arr[i]==key){
            flag=true;
            printf("Element found at index %d",i);
        }
    }
    if(flag==false)
        printf("Element not found");
    return 0;
}