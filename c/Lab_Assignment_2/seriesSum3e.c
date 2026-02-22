// S= 1/1! + 1/2! + 1/3! + 1/4! + ........... + 1/N! (Input N). 
#include <stdio.h>
int main(){ // main function
    printf("Enter a number : ");
    int N;
    scanf("%d",&N); // taking input from user
    float sum=0;
    int fact=1;
    for(int i=1;i<=N;i++){ // iterating N times
        fact*=i; // calculating factorial of i
        sum+=1.0/fact; // divide 1 by factorial of i and calculate sum
    }
    printf("The sum of required series is %f",sum); // display required sum
    return 0;
}