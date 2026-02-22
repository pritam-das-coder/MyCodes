// Q20
#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    puts("Enter all the elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0],min=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]) max=arr[i];
        if(min>arr[i]) min=arr[i];
    }
    printf("The maximum no in array is %d\n",max);
    printf("The minimum no in array is %d\n",min);
    return 0;
}