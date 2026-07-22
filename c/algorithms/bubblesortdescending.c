#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter all elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                flag=false;
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        if(flag==true) break;
    }
    printf("Sorted Array :\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}