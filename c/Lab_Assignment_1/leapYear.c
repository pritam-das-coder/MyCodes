// 8) Write a Program in C to check whether a Year is Leap year or not.
#include <stdio.h> // Preprocessor directive to include stdio library for input and output purpose in program
int main()      // main function
{   // main function's block starts
    int year;     // Declaration of year variable
    printf("Enter a year : "); // Asking user to input the year
    scanf("%d", &year);    // Initialisation of year variable as inputted by user
    if(year % 100 == 0){    // Checking if year is divisible by 100 if so then
        if(year % 400 ==0)  // Checking if year is divisible by 400 if so then
        printf("%d is a leap year",year);   // printing the given year is leap year
        else    // if condition is false then
        printf("%d is not a leap year",year);   // printing the given year is not leap year
    }
    else{ // if condition is false i.e. if year is not divisible by 100 then
        if(year % 4 ==0)    // Checking if year is divisible by 4 if so then
        printf("%d is a leap year",year);   // printing the given year is leap year
        else    // if condition is false then
        printf("%d is not a leap year",year);   // printing the given year is not leap year
    }
    return 0;   // Indicates successful execution
}   // main function's block ends