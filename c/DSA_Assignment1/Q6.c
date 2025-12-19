// Write a program in C to evaluate value of a postfix expression using stack. E.g. 456*+ result will be 34.
#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int top;
    int size;
    int* arr;
}stack;

int stackTop(stack* sp){
    if(sp->top==-1) return -1;
    return sp->arr[sp->top];
}

int isEmpty(stack* sp){
    return (sp->top==-1);
}

int isFull(stack* sp){
    return (sp->top==sp->size-1);
}

void push(stack* sp,char val){
    if(isFull(sp)){
        printf("Stack Overflow! Can't push %c into stack\n",val);
        return;
    }
    sp->top++;
    sp->arr[sp->top]=val;
}

char pop(stack* sp){
    if(isEmpty(sp)){
        printf("Stack Underflow! Can't pop from stack\n");
        return -1;
    }
    char val=sp->arr[sp->top];
    sp->top--;
    return val;
}
