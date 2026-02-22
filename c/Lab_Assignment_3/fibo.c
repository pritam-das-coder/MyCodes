// Write a Program in C to Generate the Fibonacci Series up to Nth Term.
//  1 + 1 + 2 + 3 + 5 + 8 + 13 +....+ Nth Term
#include <stdio.h>
int main() // main function
{ 
    int n;
    printf("Enter number of terms : ");
    scanf("%d", &n); // taking input
    int a = 1, b = 1, c = 0; // a->previous term,b->current term,c->next term
    // printing fibonacci series
    for (int i = 1; i <= n; i++)
    {
        c = a + b;
        printf("%d ", a);
        a = b;
        b = c;
    }
    return 0;
}