// Write a program in C to evaluate value of a postfix expression using stack. E.g. 456*+ result will be
// 34.
# include <stdio.h>
# include <limits.h>
# include <math.h>
# define max 10
int a[max];
int top;
void init(){
    top=-1;
}
int isEmpty(){
    return (top==-1);
}
void push(int data){
    if(top==max-1){
        printf("Stack is full");
        return;
    }
    top++;
    a[top]=data;
}
int pop(){
    if(isEmpty()){
        printf("Stack is empty");
        return INT_MIN;
    }
    int data=a[top];
    top--;
    return data;
}
void performOperation(char ch){
    int op1,op2;
    switch(ch){
        case '+':
            op2=pop();
            op1=pop();
            push(op1+op2);
            break;
        case '-':
            op2=pop();
            op1=pop();
            push(op1-op2);
            break;
        case '*':
            op2=pop();
            op1=pop();
            push(op1*op2);
            break;
        case '/':
            op2=pop();
            op1=pop();
            push(op1/op2);
            break;
        case '%':
            op2=pop();
            op1=pop();
            push(op1%op2);
            break;
        case '^':
            op2=pop();
            op1=pop();
            push(pow(op1,op2));
            break;
        default:
            printf("Invalid Symbol");
    }
}
int isDigit(char ch){
    if(ch>=48 && ch<=57) return 1;
    else return 0;
}
int evaluate(char postfix[]){
    int i=0;
    while(postfix[i]!='\0'){
        char ch=postfix[i];
        if(isDigit(ch)){
            push(ch-'0');
        }
        else{
            performOperation(ch);
        }
        i++;
    }
    return a[top];
}
int main(){
    char str[20];
    printf("Enter the postfix expression without spaces : \n");
    scanf("%s",&str);
    printf("Result : %d",evaluate(str));
    return 0;
}