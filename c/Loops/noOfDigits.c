//  WAP to count digits of a given number.
//  WAP to print sum of digits of a given number.
//  WAP to print sum of all the even digits of a given number.
#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=n;i>0;i/=10){
        int d=i%10;
        if(d%2==0)
            sum+=d;
    }
    // int a=n;
    // while(n!=0){
    //     int d=n%10;
    //     if(d%2==0)
    //         sum+=d;
    //     n/=10;
    // }
    printf("The sum of even digits = %d",sum);
    return 0;
}