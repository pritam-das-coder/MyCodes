// Given a point (x, y), write a program to find
// out if it lies on the x-axis, y-axis or at the origin, viz.
// (0, 0).
#include <stdio.h>
int main()
{
    double x, y;
    printf("Enter x-coordinate and y-coordinate respt. : ");
    scanf("%lf %lf", &x, &y);
    if (x == 0 && y == 0)
        printf("Point lies on origin");
    else if (x == 0)
        printf("Point lies on y-axis");
    else if (y == 0)
        printf("Point lies on x-axis");
    else
        printf("Point does not lie on x or y axis");
    return 0;
}