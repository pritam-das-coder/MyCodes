#include <stdio.h>

typedef struct stack{
    int top;
    int size;
    char* arr;
}stack;

int stackTop(stack* sp){
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

int main(){

    return 0;
}