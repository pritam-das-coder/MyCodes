// Find the total number of pairs in the array whose sum is equal to the given value x.
#include <stdio.h>
int main(){
    int x,c=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    int arr[8]={1,2,3,4,5,6,7,8};
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i]+arr[j]==x){
                c++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("%d",c);
    return 0;
}