// Write a program to create a calculator that performs basic arithmetic operations (add,
// subtract, multiply and divide) using switch case and functions. The calculator should input two
// numbers and an operator from user.
#include <stdio.h>
int main(){
    float a,b;
    char op;
    printf("Enter two no.s and the operator : ");
    scanf("%f%c%f",&a,&op,&b);
    switch(op){
        case '+':
            printf("Sum = %f",a+b);
            break;
        case '-':
            printf("Difference = %f",a-b);
            break;
        case '*':
            printf("Multiplication = %f",a*b);
            break;
        case '/':
            if(b==0){
                printf("Division by zero not allowed");
                break;
            }
            printf("Division = %f",a/b);
            break;
        default:
            printf("Invalid operator");
    }
    return 0;
}