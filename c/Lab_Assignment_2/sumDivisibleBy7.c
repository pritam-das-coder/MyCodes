// 8. Write a Program in C to find & Print the Sum of all the Numbers Divisible by 7 within a given Range.
#include <stdio.h>
int main(){ // main function
    int l,u,sum=0;
    printf("Enter the upper limit : ");
    scanf("%d",&u); // taking input from user
    printf("Enter the lower limit : ");
    scanf("%d",&l); // taking input from user
    for(int i=l+1;i<u;i++){ // iterating all no.s from l+1 to u-1
        if(i%7==0) // check if no. is divisible by 7
            sum+=i;
    }
    printf("The sum of all the Numbers Divisible by 7 within %d and %d is %d",l,u,sum); // display required sum
    return 0;
}