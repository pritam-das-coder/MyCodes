// Max and Min using divide and conquer (Try Again Later)
#include <stdio.h>
void find(int arr[],int start,int end,int* mx,int* mn){
    if(start==end){
        *mx=arr[start];
        *mn=arr[end];
        return;
    }
    int mid=(start+end)/2;
    find(arr,start,mid,mx,mn);
    find(arr,mid+1,end,mx,mn);

}
int main() {
    int n;
    printf("Enter input size : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter all elements of array : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
}