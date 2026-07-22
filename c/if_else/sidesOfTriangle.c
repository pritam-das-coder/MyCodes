// Take 3 numbers input and tell if they can be the sides of a triangle
#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter 3 numbers : ");
    scanf("%f %f %f", &a, &b, &c);
    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        printf("Triangle can be formed");
    }
    else
    {
        printf("Triangle cannot be formed");
    }
    return 0;
}