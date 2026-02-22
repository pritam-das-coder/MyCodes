// Q22
#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    puts("Enter all the elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter a number : ");
    scanf("%d",&k);
    bool flag=false;
    for(int i=0;i<n;i++){
        if(k==arr[i]){
            flag=true;
            printf("%d is found at index %d",k,i);
            break;
        }
    }
    if(!flag)
        printf("%d not found in array",k);
    return 0;
}