#include<stdio.h>
int main(){
    int a,b;
    printf("Enter divident & divisor respectively : ");
    scanf("%d%d",&a,&b);
    // int rem=a-b*(a/b);
    // printf("The remainder when %d is divided by %d = %d",a,b,rem)
    int rem=a%b;
    printf("The remainder when %d is divided by %d is %d",a,b,rem);
    return 0;
}