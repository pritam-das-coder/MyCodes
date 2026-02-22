#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    printf("Enter 3rd number : ");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
            printf("%d is largest", a);
        else                            // c>a
            printf("%d is largest", c); // c>a>b
    }
    else
    { // a<b
        if (b > c)
            printf("%d is largest", b);
        else // a<b<c
            printf("%d is largest", c);
    }
    return 0;
}