// Count the number of triplets whose sum is equal to the given value x.
#include <stdio.h>
int main(){
    int x,c=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    int arr[8]={1,2,3,4,5,6,7,8};
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            for(int k=j+1;k<8;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    c++;
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("%d",c);
    return 0;
}