#include <stdio.h>
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
        int min=arr[i],min_idx=i;
        for(int j=i+1;j<=n-1;j++){
            if(min>arr[j]){
                min=arr[j];
                min_idx=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min_idx];
        arr[min_idx]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}