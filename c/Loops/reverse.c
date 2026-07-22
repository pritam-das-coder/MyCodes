// WAP to print reverse of a given number.
// WAP to print the sum of given number and its reverse
#include <stdio.h>
int main(){
    int n,r=0,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    // for(int i=n;i>0;i/=10){
    //     int d=i%10;
    //     r=r*10+d;
    // }
    int a=n;
    while(a>0){
        int d=a%10;
        r=r*10+d;
        a/=10;
    }
    sum=n+r;
    //printf("The reverse of %d is %d",n,r);
    printf("The required sum is %d",sum);
    return 0;
}