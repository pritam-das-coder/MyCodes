// 1. Write a Program in C to compute the Factorial of a Number.
#include <stdio.h>
int main(){ // main function
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n<0){ // checking if number is negative
        printf("INVALID INPUT!\nENTER NON-NEGATIVE NUMBER.");
        return 0;
    }
    int fact=1; // Creating variable to store factorial
    for(int i=1;i<=n;i++){ // multiplying no.s from 1 to number itself to find factorial
        fact*=i;
    }
    printf("The factorial of %d is %d",n,fact);
    return 0;
}
