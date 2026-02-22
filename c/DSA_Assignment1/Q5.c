// Write a program in C to convert infix expression to postfix expression using stack.
// Considering expression A+(B*C-(D/E^F)*G)*H solution expected here is a postfix expression
// ABC*DEF^/G*-H*+.
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# define max 30 
int top;
char opStack[max];
void init(){
    top=-1;
}
int isEmpty(){
    return (top==-1);
}
void push(char data){
    if(top==max-1){
        printf("Stack is full");
        return;
    }
    top++;
    opStack[top]=data;
}
char pop(){
    if(isEmpty()){
        printf("Stack is empty");
        return '!';
    }
    char data=opStack[top];
    top--;
    return data;
}
int whichGroup(char ch){
    if(ch=='+' || ch=='-') return 1;
    else if(ch=='*' || ch=='/' || ch=='%') return 2;
    else if(ch=='^') return 3;
    else return -1;
}
int isHigherPrecedence(char ch){
    int x=whichGroup(ch),y=whichGroup(opStack[top]);
    if(x>y) return 1;
    else if(x<y) return 0;
    else{
        if(x==1 || x==2)    return 1;// 0
        else    return 0;// 1
    }
}
int isOperand(char ch){
    return isalnum(ch);
}
void convert(char infix[],char postfix[]){
    init();
    int i=0,j=0;
    while(infix[i]!='\0'){
        char ch=infix[i];
        if(isOperand(ch)){
            postfix[j]=ch;
            j++;
        }
        else if(ch=='(') push(ch);
        else if(ch==')'){
            while(!isEmpty() && opStack[top]!='('){
                postfix[j]=pop();
                j++;
            }
            pop();
        }
        else{
            if(isEmpty()){
                push(ch);
            }
            else{
                if(isHigherPrecedence(ch))  push(ch);
                else{
                    while(!isEmpty() && !isHigherPrecedence(ch)){
                        postfix[j]=pop();
                        j++;
                    }
                    push(ch);
                }
            }
        }
        i++;
    }
    while(!isEmpty()){
        postfix[j]=pop();
        j++;
    }
    postfix[j]='\0';
}
void reverse(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
    }
}
void swapBrackets(char exp[]) {
    for (int i = 0; exp[i] != '\0'; i++) {
        if (exp[i] == '(') exp[i] = ')';
        else if (exp[i] == ')') exp[i] = '(';
    }
}
int main(){
    char infix[max];
    char postfix[max];
    printf("Enter the infix expression that you want to convert to postfix : ");
    fgets(infix, max, stdin);
    infix[strcspn(infix, "\n")] = 0;
    reverse(infix);
    swapBrackets(infix);
    convert(infix,postfix);
    reverse(postfix);
    puts(postfix);
    return 0;
}
// infix to prefix