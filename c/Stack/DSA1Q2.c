// Write a program in C to find Maximum and Minimum element from an array of integer
// (recursively).
# include <stdio.h>
void find(int arr[],int res[],int i,int n){
    if(i==n) return;
    if(res[0]<arr[i]){
        res[0]=arr[i];
    }
    if(res[1]>arr[i]){
        res[1]=arr[i];
    }
    find(arr,res,i+1,n);
}
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter all elements of array : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result[2];
    result[0]=arr[0];
    result[1]=arr[0];
    find(arr,result,1,n);
    printf("Maximum element : %d\n",result[0]);
    printf("Minimum element : %d\n",result[1]);
}