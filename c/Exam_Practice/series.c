#include <stdio.h>
#include <stdlib.h>
int fact(int n){
    if(n==0) return 1;
    else return n*fact(n-1);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n<4){
        printf("INVALID INPUT!");
        exit(EXIT_FAILURE);
    }
    float sum=0;
    for(int i=4;i<=n;i+=2){
        if(i%4==0)
            sum+=(1.0/fact(i));
        else
            sum-=(1.0/fact(i));
    }
    printf("Sum = %g",sum);
    return 0;
}