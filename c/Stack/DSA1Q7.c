// Write a program in C to reverse a string using stack.
# include <stdio.h>
# include <limits.h>
# include <string.h>
# define max 50
char ch[max];
int top;
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
    ch[top]=data;
}
int pop(){
    if(isEmpty()){
        printf("Stack is empty");
        return INT_MIN;
    }
    char data=ch[top];
    top--;
    return data;
}
int main(){
    char str[max];
    printf("Enter a string : \n");
    fgets(str,max,stdin);
    int len=strlen(str);
    if(len>0 && str[len-1]=='\n'){
        str[len-1]='\0';
    }
    init();
    int i=0;
    while(str[i]!='\0'){
        push(str[i]);
        i++;
    }
    i=0;
    while(!isEmpty()){
        str[i]=pop();
        i++;
    }
    printf("Reversed String : %s",str);
}