// 7. Write a Program in C to enter marks of five subjects. Find the Sum and the 
// Average of them and then assign grade to the students according to the rule 
// below 
// AVG                 GRADE
// >=90% to <=100%       O
// >=80% to <=89%        E
// >=70% to <=79%        A
// >=60% to <=69%        B 
// >=50% to <=59%        C
// >=40% to <=49%        D
// <40%                 FAIL
#include <stdio.h> // Preprocessor directive to include stdio library for input and output purpose in program
int main()      // main function
{
    int m1,m2,m3,m4,m5;     // Declaration of five variables for five subjects' marks
    printf("Enter marks of all five subjects respectively : "); // Asking user to input the marks
    scanf("%d %d %d %d %d", &m1,&m2,&m3,&m4,&m5);    // Initialisation of m1,m2,m3,m4 and m5 as inputted by user
    int sum=(m1+m2+m3+m4+m5); // Calculate sum of all the 5 marks and store it in sum variable
    int avg=sum/5;    // Calculate average of 5 marks and store it in avg variable
    if(avg>=90)
    printf("Grade : O");
    else if(avg>=80)
    printf("Grade : E");
    else if(avg>=70)
    printf("Grade : A");
    else if(avg>=60)
    printf("Grade : B");
    else if(avg>=50)
    printf("Grade : C");
    else if(avg>=40)
    printf("Grade : D");
    else
    printf("Grade : FAIL");
    return 0;   // Indicates successful execution
}
