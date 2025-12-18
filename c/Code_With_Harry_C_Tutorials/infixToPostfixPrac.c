#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

char* infixToPostfix(char* infix){
    stack* sp=(stack*)malloc(sizeof(stack));
    sp->top=-1;
    sp->size=10;
    sp->arr=(char*)malloc(sp->size*sizeof(char));
    char* postfix=(char*)malloc((strlen(infix)+1)*sizeof(char));
    int i=0; // to scan infix array
    int j=0; // to fill postfix array
    while(infix[i]!='\0'){
        if(!isOperator(infix[i])){
            postfix[j]=infix[i];
            i++;
            j++;
        }
        else{
            if(precedence(infix[i])>precedence(stackTop(sp))){

            }
        }
    }
}

int main(){
    char* infix="x-y/z-k*d";
    
    return 0;
}