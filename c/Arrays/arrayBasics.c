#include <stdio.h>
int main(){
    // int arr[5]={2,4,1,8,100};
    // for(int i=0;i<=4;i++){
    //     printf("%d ",arr[i]);
    // }
    int a[5];
    //printf("Enter 5 numbers : ");
    for(int i=0;i<=4;i++){
        printf("Enter element number %d : ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
        printf("%d ",a[i]);
    return 0;
}