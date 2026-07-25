// 6. Write a Program in C to check whether a number is Prime or not. 
#include <stdio.h>
int main(){ // main function
    int n,c=0;
    printf("Enter a number : ");
    scanf("%d",&n); // taking input from user
    for(int i=1;i<=n;i++){ // counting no. of factors of n
        if(n%i==0)
            c++;
    }
    if(c==1) // if no. of factors is 1 then no. is 1
        printf("%d is neither prime nor composite",n);
    else if(c==2) // if no. of factors is 2 then no. is prime(1 & itself)
        printf("%d is a prime number",n);
    else // otherwise composite
        printf("%d is a composite number",n);
    return 0;
}