// 4) Write a C program to convert temperature from Fahrenheit to Celsius.
#include <stdio.h> // Preprocessor directive to include stdio library for input and output purpose in program
int main()      // main function
{   // main function's block starts
    double tempF;     // Declaration of tempF variable
    printf("Enter temperature in Fahrenheit : "); // Asking user to input the temperature in Fahrenheit
    scanf("%lf", &tempF);    // Initialisation of tempF as inputted by user
    double tempC=(5/9.0)*(tempF-32); // Calculating temperature in celsius and initializing tempC variable with it
    printf("Required temperature in celsius is %lf",tempC); // Printing temperature in celsius
    return 0;   // Indicates successful execution
}   // main function's block ends