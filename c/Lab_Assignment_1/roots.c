// 9. Write a Program in C to find the Roots of a Quadratic Equation 
#include <stdio.h> // Preprocessor directive to include stdio library for input and output purpose in program
#include <math.h> // Preprocessor directive to include math library which has various mathematical functions
int main()      // main function
{   // main function's block starts 
    double a, b, c;     // Declaration of three variables a , b and c
    printf("Enter the coefficients (a,b,c) of a Quadratic Equation respectively : "); // Asking user to input the coefficients of a Quadratic Equation 
    scanf("%lf %lf %lf", &a,&b,&c);    // Initialisation of a,b,c as inputted by user
    double discriminant= b*b - 4*a*c; // finding the discriminant of the Quadratic Equation and storing it in variable
    double x1,x2;   // Declaration of two variables x1,x2 to store roots of equation
    if(discriminant>=0){    // Checking if discriminant is greater than or equal to zero if so then
        x1=(-b-sqrt(discriminant))/(2*a); // finding one root and storing it in x1
        x2=(-b+sqrt(discriminant))/(2*a);   // finding second root and storing it in x2
        printf("Roots are %lf and %lf",x1,x2);  // printing the roots found
    }
    else{   // if condition is false then
        printf("Roots are imaginary");  // printing roots are imaginary as discriminant < 0
    }
    return 0;   // Indicates successful execution
} // main function's block ends