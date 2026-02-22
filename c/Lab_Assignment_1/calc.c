// 2. Write a Program in C to Make a Simple Calculator (Taking two Inputs & 
//    calculate their Addition, Subtraction, Multiplication, Division). 
#include <stdio.h> // Preprocessor directive to include stdio library for input and output purpose in program
int main()      // main function
{
    float a, b;     // Declaration of two variables a and b
    printf("Enter first input : "); // Asking user to input the value of a
    scanf("%f", &a);    // Initialisation of a as inputted by user
    printf("Enter second input : ");  // Asking user to input the value of b
    scanf("%f", &b);    // Initialisation of b as inputted by user
    printf("%f + %f = %f\n",a,b,(a+b)); // Calculating sum and printing it
    printf("%f - %f = %f\n",a,b,(a-b)); // Calculating difference and printing it
    printf("%f x %f = %f\n",a,b,(a*b)); // Calculating  multiplication and printing it
    printf("%f / %f = %f",a,b,(a/b)); // Calculating division and printing it
    return 0;   // Indicates successful execution
}