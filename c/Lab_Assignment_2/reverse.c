// 5. Write a Program in C to Print the Reverse of a Number. 
#include <stdio.h>
int main(){ // main function
    int n,r=0;
    printf("Enter a number : ");
    scanf("%d",&n); // taking input from user
    for(int i=n;i>0;i/=10){ // at each iteration updating i by dividing it with 10 until it becomes 0
        int d=i%10; // extract last digit of i
        r=r*10+d; // store reverse in r
    }
    printf("The reverse of %d is %d",n,r); // display reverse of n
    return 0;
}