// 1. Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms.
// 2. Display this GP - 3,12,48,.. upto ‘n’ terms.
#include <stdio.h>
#include <math.h>
int main(){
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    // int a=3;
    // for(int i=1;i<=n;i++){
    //     printf("%d ",a);
    //     a*=4;
    // }
    for(int i=3;i<=3*pow(4,n-1);i*=4){
        printf("%d ",i);
    }
    return 0;
}