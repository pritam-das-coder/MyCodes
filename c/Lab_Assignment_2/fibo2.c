// Write a Program in C to Generate the Fibonacci Series up to Nth Term. 
// 1 + 1 + 2 + 3 + 5 + 8 + 13 + ........ + Nth Term
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number of terms : ");
    scanf("%d",&n);
    int a=1,b=1,c=0,sum=0;
    for(int i=1;i<=n;i++){
        sum+=a;
        c=a+b;
        a=b;
        b=c;
    }
    printf("The sum of fibonacci series is %d",sum);
    return 0;
}