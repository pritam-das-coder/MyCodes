// Write a program in C to evaluate value of a postfix expression using stack. E.g. 456*+ result will be 34.
#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int top;
    int size;
    int* arr;
}stack;

