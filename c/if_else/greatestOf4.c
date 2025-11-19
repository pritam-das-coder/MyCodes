// Take 3 positive integers input and print the greatest of them. (all distinct)
#include <stdio.h>
int main()
{
    int x, y, z, w;
    printf("Enter the 1st number : ");
    scanf("%d", &x);
    printf("Enter the 2nd number : ");
    scanf("%d", &y);
    printf("Enter the 3rd number : ");
    scanf("%d", &z);
    printf("Enter the 4th number : ");
    scanf("%d", &w);
    if (x > y && x > z && x > w)
    {
        printf("%d is the greatest number", x);
    }
    else if (y > x && y > z && y > w)
    {
        printf("%d is the greatest number", y);
    }
    else if (z > x && z > y && z > w)
    {
        printf("%d is the greatest number", z);
    }
    else
    {
        printf("%d is the greatest number", w);
    }
    return 0;
}