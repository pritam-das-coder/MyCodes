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
int main(){

    return 0;
}