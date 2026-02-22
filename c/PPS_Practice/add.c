#include <stdio.h>
int main(){
    int arr[]={3,8,91,6,3,2};
    int sum=0;
    for(int i=0;i<6;i++){
        if(arr[i]%2==0) sum+=arr[i];
    }
    printf("Sum = %d",sum);
    return 0;
}