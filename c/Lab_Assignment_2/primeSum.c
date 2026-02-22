// 7. Write a Program in C to find the sum of all the Prime numbers between a given ranges of numbers. 
#include <stdio.h>
int main(){ // main function
    int l,u,sum=0,c;
    printf("Enter the upper limit : ");
    scanf("%d",&u); // taking input from user
    printf("Enter the lower limit : ");
    scanf("%d",&l); // taking input from user
    for(int i=l+1;i<u;i++){ // iterating all no.s from l+1 to u-1
        c=0;
        for(int j=1;j<=i;j++){ // counting no. of factors of i
            if(i%j==0)
                c++;
        }
        if(c==2) // checking if i is prime
            sum+=i;
    }
    printf("The sum of all the Prime numbers between %d and %d is %d",l,u,sum); // display required sum
    return 0;
}