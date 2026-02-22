// 10.  Write a C program for determining whether a number is Palindrome or not. 
//      (e.g. 141 is a Palindrome number.) 
#include <stdio.h>
int main(){ // main function
    int n,r=0;
    printf("Enter a number : ");
    scanf("%d",&n); // taking input from user
    for(int i=n;i>0;i/=10){ // finding reverse of n
        int d=i%10;
        r=r*10+d;
    }
    if(r==n) // check if reverse of n & n itself are same
        printf("%d is Palindrome",n);
    else
        printf("%d is not Palindrome",n);
    return 0;
}