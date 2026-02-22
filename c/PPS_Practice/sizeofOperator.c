#include <stdio.h>
int main(){
    int arr[]={2,4,9,-1,0,2};
    int x=sizeof(arr);
    int len=x/4;
    printf("Length of array : %d",len);
}