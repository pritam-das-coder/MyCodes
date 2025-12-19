// Write a program in C to evaluate value of a postfix expression using stack. E.g. 456*+ result will be 34.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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

int isOperator(char ch){
    return (ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^');
}

int calc(int op2,int op1,char operator){
    if(operator=='+') return op1+op2;
    else if(operator=='-') return op1-op2;
    else if(operator=='*') return op1*op2;
    else if(operator=='/') return op1/op2;
    else if(operator=='^') return pow(op1,op2);
    else return -1;
}

int evaluatePostfix(char* postfix){
    stack* sp=(stack*)malloc(sizeof(stack));
    sp->top=-1;
    sp->size=strlen(postfix);
    sp->arr=(int*)malloc((sp->size+1)*sizeof(int));
    int i=0;
    while(postfix[i]!='\0'){
        if(!isOperator(postfix[i])){ // operand
            push(sp,postfix[i]-'0');
        }
        else{
            int val=calc(pop(sp),pop(sp),postfix[i]); // op2-op1
            push(sp,val);
        }
        i++;
    }
    int ans=pop(sp);
    free(sp);
    free(sp->arr);
    return ans;
}

int main(){
    char* postfix="53+82-*";
    printf("Calculated value is %d",evaluatePostfix(postfix));
    return 0;
}