#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

// Global Stack definition
int stack[MAX];
int top = -1;

// Function to push an item to the stack
void push(int e) {
    if (top >= MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = e;
}

// Function to pop an item from the stack
int pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack[top--];
}

// Function to evaluate the postfix expression
int evaluatePostfix(char* exp) {
    int i = 0;
    
    while (exp[i] != '\0') {
        
        if (exp[i] == ' ' || exp[i] == '\n') {
            i++;
            continue;
        }
        
        if (isdigit(exp[i])) {
            int num = 0;
            while (isdigit(exp[i])) {
                num = num * 10 + (exp[i] - '0');
                i++;
            }
            i--;
            
            push(num);
        } 
        else {
            int val1 = pop();
            int val2 = pop(); 
            
            switch (exp[i]) {
                case '+': 
                    push(val2 + val1); 
                    break;
                case '-': 
                    push(val2 - val1); 
                    break;
                case '*': 
                    push(val2 * val1); 
                    break;
                case '/': 
                    push(val2 / val1); 
                    break;
                default: 
                    printf("Unknown operator encountered: %c\n", exp[i]);
                    exit(1);
            }
        }
        i++;
    }
    
    return pop();
}

int main() {
    char exp[MAX];

    printf("Enter a postfix expression (separate numbers and operators with spaces):\n");
    if (fgets(exp, sizeof(exp), stdin) != NULL) {
        int result = evaluatePostfix(exp);
        printf("Result : %d\n", result);
    }

    return 0;
}