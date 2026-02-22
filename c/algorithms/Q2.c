// Given an integer array and an integer k 
// where k <= size of array, We need to return the kth 
// smallest element of the array.
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
    int k;
    printf("Enter an integer : ");
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        int min=arr[i],min_idx=i;
        for(int j=i+1;j<=n-1;j++){
            if(arr[j]<min){
                min=arr[j];
                min_idx=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min_idx];
        arr[min_idx]=temp;
    }
    printf("%d th smallest element is %d\n",k,arr[k-1]);
    printf("Resultant Array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}