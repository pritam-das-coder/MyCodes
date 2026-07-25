#include <stdio.h>
#include <limits.h>
#define max 5
int top,a[max];
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
    if(top==-1){
        printf("Empty Stack");
        return INT_MIN;
    }
    int data=a[top];
    top--;
    return data;
}
int main(){
    init();
    push(1);
    push(6);
    push(4);
    pop();
    pop();
    pop();
    printf("%d \n",isEmpty());
    // push(6);
    // push(4);
    //push(9);
    printf("%d\n",top);
    for(int i=0;i<max;i++) printf("%d ",a[i]);
}