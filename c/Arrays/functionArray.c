#include <stdio.h>
void swap(int a[]){
    int temp=a[0];
    a[0]=a[1];
    a[1]=temp;
}
int main(){
    int arr[2]={4,3};
    printf("%d %d\n",arr[0],arr[1]);
    swap(arr); // function call , call by reference
    printf("%d %d\n",arr[0],arr[1]);
    return 0;
}