// 6. Write a Program in C to find the Largest of Three Numbers.
#include <stdio.h> // Preprocessor directive to include stdio library for input and output purpose in program
int main()      // main function
{
    float a, b, c;     // Declaration of three variables a , b and c
    printf("Enter first number : "); // Asking user to input the value of a
    scanf("%f", &a);    // Initialisation of a as inputted by user
    printf("Enter second number : ");  // Asking user to input the value of b
    scanf("%f", &b);    // Initialisation of b as inputted by user
    printf("Enter third number : ");  // Asking user to input the value of c
    scanf("%f", &c);    // Initialisation of c as inputted by user
    if(a>b && a>c) // Checking if a is larger than b and c if true then
    printf("%f is largest",a); // printing a is largest
    else if(b>a && b>c) // Checking if b is larger than a and c if true then
    printf("%f is largest",b); // printing b is largest
    else // if previous two condition is false then
    printf("%f is largest",c);  // printing c is largest
    return 0;   // Indicates successful execution
}