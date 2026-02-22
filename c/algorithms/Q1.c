// Given an integer array arr, move all 0's to the 
// end of it while maintaining the relative order of the 
// non-zero elements.
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
    for(int i=n-1;i>=0;i--){
        if(arr[i]==0){
            for(int j=i;j<n-1 && arr[j+1]!=0;j++){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Resultant Array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}