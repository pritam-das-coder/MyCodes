// 1. Display this AP - 1,3,5,7,9.. upto ‘n’ terms.
// 2. Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
#include <stdio.h>
int main(){
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    for(int i=4;i<=(3*n+1);i+=3){
        printf("%d ",i);
    }
    // int a=4;
    // for(int i=1;i<=n;i++){
    //     printf("%d ",a);
    //     a+=3;
    // }
    return 0;
}