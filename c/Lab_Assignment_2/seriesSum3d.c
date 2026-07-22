// S=1 + 1/3 + 1/9 + 1/27 + 1/81 + 1/243 + ........... Up to Nth Term.
#include <stdio.h>
#include <math.h> // for using in-build pow function(used later)
int main(){ // main function
    printf("Enter a number : ");
    int N;
    scanf("%d",&N); // taking input from user
    float sum=0;
    for(int i=0;i<N;i++){ // providing 0 to N-1 no.s
        sum+=1/pow(3,i);  // i is the power of 3 which is in denominator
    }
    printf("The sum of required series is %f",sum); // display required sum
    return 0;
}