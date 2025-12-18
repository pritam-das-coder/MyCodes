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

// char* infixToPostfix(char* infix){
//     char* postfix=(char*)malloc((strlen(infix)+1)*sizeof(char))
// }
int main(){
    char* infix="x-y/z-k*d";
    printf("%d",strlen(infix));
    return 0;
}