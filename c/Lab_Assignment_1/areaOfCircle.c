// Write a C program to find out the Area of a Circle.
#include <stdio.h> // Preprocessor directive to include stdio library for input and output purpose in program
#include <math.h> // Preprocessor directive to include math library for using M_PI constant in program   
int main()      // main function
{
    double radius;     // Declaration of radius variable
    printf("Enter radius of circle : "); // Asking user to input the radius of circle
    scanf("%lf", &radius);    // Initialisation of radius as inputted by user
    double area=M_PI * radius * radius; // Calculating area of circle and initializing area variable with it
    printf("Area of circle of radius %lf is %lf ",radius,area); // Printing area of circle along with its radius
    return 0;   // Indicates successful execution
}