// Write a program in C to evaluate value of a postfix expression using stack. E.g. 456*+ result will be 34.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void push(stack* sp,int val){
    if(isFull(sp)){
        printf("Stack Overflow! Can't push %d into stack\n",val);
        return;
    }
    sp->top++;
    sp->arr[sp->top]=val;
}

int pop(stack* sp){
    if(isEmpty(sp)){
        printf("Stack Underflow! Can't pop from stack\n");
        return -1;
    }
    int val=sp->arr[sp->top];
    sp->top--;
    return val;
}

int evaluatePostfix(char* postfix){
    stack* sp=(stack*)malloc(sizeof(stack));
    sp->top=-1;
    sp->size=strlen(postfix);
    sp->arr=(int*)malloc((sp->size+1)*sizeof(int));
    int i=0;
    while(postfix[i]!='\0'){
        if(!isOperator(postfix[i])){ // operand
            push(sp,postfix[i]);
            i++;
        }
        else{
            
        }
    }
}
int main(){

    return 0;
}