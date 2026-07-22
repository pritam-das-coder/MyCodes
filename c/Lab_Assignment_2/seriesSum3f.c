#include <stdio.h>
#include <math.h> // for using in-build pow function(used later)
int findFactorial(int n){ // finding factorial of n
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int main(){ // main function
    int N;
    float x;
    printf("Enter number of terms : ");
    scanf("%d",&N); // taking input from user
    printf("Enter angle in radian : ");
    scanf("%f",&x); // taking input from user
    float sum=0;
    int c=1; // storing odd no.s
    for(int i=1;i<=N;i++){ // iterating N times
       sum+=(pow(-1,i+1)*pow(x,c))/findFactorial(c);// find each term & add to sum
       c+=2;
    }
    printf("sin %f = %f",x,sum); // display required sum
    return 0;
}