// Write a program to copy the contents of one array into another in the reverse order.
#include <stdio.h>
int main(){
    int a[7]={11,2,3,4,5,-6,7};
    int b[7];
    for(int i=0;i<7;i++){
        b[i]=a[6-i];
    }
    for(int i=0;i<7;i++){
        a[i]=b[i];
    }
    for(int i=0;i<7;i++){
        printf("%d ",a[i]);
    }
    return 0;
}