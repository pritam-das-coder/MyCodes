// Q21
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
    for(int i=0;i<n-1;i++){
        int min_pos=i;
        for(int j=i+1;j<n;j++){
            if(arr[min_pos]>arr[j]){
                //min=arr[j];
                min_pos=j;
            }
        }
        int temp=arr[min_pos];
        arr[min_pos]=arr[i];
        arr[i]=temp;
    }
    puts("Sorted Array :");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}