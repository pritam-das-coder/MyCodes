// S=1 + 3 + 5 + 7 + .......... + N (Input N).
#include <stdio.h>
int main(){ // main function
    printf("Enter a number : ");
    int N;
    scanf("%d",&N); // taking input from user
    int sum=0;
    for(int i=1;i<=N;i+=2){ // calculating sum of odd no.s from 1 to N
        sum+=i;
    }
    printf("The sum of required series is %d",sum); // display required sum
    return 0;
}