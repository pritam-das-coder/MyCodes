#include <stdio.h>
int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // selection sort (descending order)
    for(int i=0;i<n-1;i++){
        int max=arr[i],max_idx=i;
        for(int j=i+1;j<=n-1;j++){
            if(max<arr[j]){
                max=arr[j];
                max_idx=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[max_idx];
        arr[max_idx]=temp;
    }
    printf("Sorted Array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}