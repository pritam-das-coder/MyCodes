// 1+1/2 + 1/4 + 1/8 + 1/16 + .......... + 1/ 2^N (Input N). 
#include <stdio.h>
#include <math.h> // for using in-build pow function(used later)
int main(){ // main function
    printf("Enter a number : ");
    int N;
    scanf("%d",&N); // taking input from user
    double sum=0;
    for(int i=0;i<=N;i++){ // providing 0 to N no.s 
        sum+=1/pow(2,i);  // i is the power of 2 which is in denominator
    }
    printf("The sum of required series is %lf",sum); // display required sum
    return 0;
}
