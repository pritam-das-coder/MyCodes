// Write a Program in C to implement the Binary to Decimal Conversation.
#include <stdio.h>
int main() // main function
{ 
    int bin;
    printf("Enter a binary number : ");
    scanf("%d", &bin); // taking input
    int f = 1, decimal = 0;
    // converting binary no. to decimal no.
    for (int i = bin; i > 0; i /= 10)
    {
        int d = i % 10;
        decimal += d * f;
        f *= 2;
    }
    printf("%d is equivalent to %d in decimal", bin, decimal); // for printing
    return 0;
}