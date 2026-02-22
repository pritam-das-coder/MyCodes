// Write a Program in C to find the sum of the series using
// function. S= 1! + 2! + 3! + 4! + . . .
#include <stdio.h>
int seriesSum(int n) // for calculating sum of series upto n terms
{
    int x = 0, f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
        x += f;
    }
    return x;
}
int main()
{ // main function
    int n;
    printf("Enter number of terms : "); // for printing
    scanf("%d", &n); // taking input
    int sum = seriesSum(n); // calling user-defined function
    printf("The sum of given series upto %d terms is %d", n, sum); // for printing
    return 0;
}