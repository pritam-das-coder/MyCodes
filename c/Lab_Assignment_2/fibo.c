// Write a Program in C to Generate the Fibonacci Series up to Nth Term. 
// 1 + 1 + 2 + 3 + 5 + 8 + 13 + ........ + Nth Term
#include <stdio.h>
int main(){ // main function
    int N;
    printf("Enter a number of terms : ");
    scanf("%d",&N); // taking input from user
    int a=1,b=1,c=0;// a stores previous term, b stores current term, c stores next term(their sum)
    for(int i=1;i<=N;i++){ // iterating N times
        c=a+b; // Compute the next term in the sequence
        printf("%d ",a);// printing previous term
        a=b; // Move 'b' to 'a' (shift values)
        b=c; // Move 'c' to 'b' (shift values)
    }
    return 0;
}