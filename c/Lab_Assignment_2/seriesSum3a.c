// S=1 + 2 + 3 + 4 + ........... + N (Input N).
#include <stdio.h>
int main(){ // main function
    printf("Enter a number : ");
    int N; 
    scanf("%d",&N); // taking input from user
    int sum=0;
    for(int i=1;i<=N;i++){ // calculating sum of all no.s from 1 to N
        sum+=i;
    }
    printf("The sum of required series is %d",sum); // display required sum
    return 0;
}