// Take 3 positive integers input and print the greatest of them. (all distinct)
#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter the 1st number : ");
    scanf("%d", &x);
    printf("Enter the 2nd number : ");
    scanf("%d", &y);
    printf("Enter the 3rd number : ");
    scanf("%d", &z);
    if (x > y && x > z)
    {
        printf("%d is the greatest number", x);
    }
    else if (y > x && y > z)
    {
        printf("%d is the greatest number", y);
    }
    else
    {
        printf("%d is the greatest number", z);
    }
    return 0;
}