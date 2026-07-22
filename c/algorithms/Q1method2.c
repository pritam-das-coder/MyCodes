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
    int ans[n];
    for(int i=0;i<n;i++){
        ans[i]=0;
    }
    int idx=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            ans[idx]=arr[i];
            idx++;
        }
    }
    printf("Resultant Array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",ans[i]);
    }
    return 0;
}