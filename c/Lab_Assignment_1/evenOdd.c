// 5. Write a Program in C to find whether a number is EVEN or ODD.
#include <stdio.h> // Preprocessor directive to include stdio library for input and output purpose in program
int main()      // main function
{   // main function's block starts
    int n;     // Declaration of n variable
    printf("Enter a number : "); // Asking user to input a number 
    scanf("%d", &n);    // Initialisation of n as inputted by user
    if(n % 2 == 0)  // Checking if the number is divisible by 2
    printf("%d is an Even number",n); // if the number is divisible by 2 printing it's an Even number
    else    // if the condition is false
    printf("%d is an Odd number",n); // if the number is not divisible by 2 printing it's an Odd number
    return 0;   // Indicates successful execution
}   // main function's block ends