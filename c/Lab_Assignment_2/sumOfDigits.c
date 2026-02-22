// 9.  Write a Program in C to find the Sum of the Digits of a Number.
#include <stdio.h>
int main(){ // main function
    int n,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n); // taking input from user
    for(int i=n;i>0;i/=10){ // at each iteration updating i by dividing it with 10 until it becomes 0
        int d=i%10; // extract last digit of i
        sum+=d; // store sum of digits in sum
    }
    printf("The sum of digits of %d is %d",n,sum); // display required sum
    return 0;
}