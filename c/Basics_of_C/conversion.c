// Q1.Take integer as input and print half of the number.
// Q2.Take float input +ve and print the fractional part of the real number.
#include<stdio.h>
int main(){
    // Q1
    // int a;
    // printf("Enter an integer : ");
    // scanf("%d",&a);
    // printf("Half of %d is %f",a,(a/2.0));
    //Q2
    float a;
    printf("Enter the number : ");
    scanf("%f",&a);
    int b=a;// float to int
    float frac=a-b;
    printf("The fractional part of %f is %f ",a,frac);
    return 0;
}