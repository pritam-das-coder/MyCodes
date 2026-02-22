// Write a Program in C to find the GCD & LCM of two given numbers using function.
#include <stdio.h>
int findGCD(int a, int b)
// finding GCD of 2 no.s by continued division method
{ 
    int max = a, min = a;
    if (a > b)
        min = b;
    else
        max = b;
    int div = max;
    int dir = min;
    int r = div % dir;
    while (r != 0)
    {
        div = dir;
        dir = r;
        r = div % dir;
    }
    return dir;
}
int findLCM(int a, int b)
// finding LCM of 2 no.s
{ 
    int res = 0;
    for (int i = a * b; i >= 1; i--)
    {
        if (i % a == 0 && i % b == 0)
        {
            res = i;
        }
    }
    return res;
}
int main() // main function
{ 
    int a, b;
    printf("Enter the first number : "); // for printing
    scanf("%d", &a); // taking input
    printf("Enter the second number : "); // for printing
    scanf("%d", &b); // taking input
    int gcd = findGCD(a, b); // calling user-defined function
    printf("The GCD of %d and %d is %d\n", a, b, gcd); // for printing
    int lcm = findLCM(a, b); // calling user-defined function
    printf("The LCM of %d and %d is %d", a, b, lcm); // for printing
    return 0;
}