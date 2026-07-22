// 1) Write a C program to Swap the value of two Variables. 
//    (Using a 3rd Variable & without Using a 3rd Variable).
#include <stdio.h> // Preprocessor directive to include stdio library for input and output purpose in program
int main()      // main function
{
    float a, b;     // Declaration of two variables a and b
    printf("Let two variables be a and b.\nEnter the value of a : "); // Asking user to input the value of a
    scanf("%f", &a);    // Initialisation of a as inputted by user
    printf("Enter the value of b : ");  // Asking user to input the value of b
    scanf("%f", &b);    // Initialisation of b as inputted by user
    printf("Before swapping :\na=%f  b=%f \n", a, b);   // Printing a and b before swapping
    a=a+b;  // Storing sum of a and b in a
    b=a-b;  // Storing difference of a and b in b
    a=a-b;  // Storing difference of a and b in a
    printf("After swapping :\na=%f  b=%f \n", a, b);    // Printing a and b after swapping
    return 0;   // Indicates successful execution
}
