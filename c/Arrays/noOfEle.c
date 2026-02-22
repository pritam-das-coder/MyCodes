// Count the number of elements in given array greater than a given number x.
#include <stdio.h>
int main(){
    int x,count=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    int arr[5]={72,81,30,93,59};
    for(int i=0;i<5;i++){
        if(arr[i]>x) count++;
    }
    printf("%d",count);
    return 0;
}