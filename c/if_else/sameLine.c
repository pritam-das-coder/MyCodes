// Given three points (x1, y1), (x2, y2) and
// (x3, y3), write a program to check if all the three
// points fall on one straight line.
#include <stdio.h>
int main()
{
    float x1, x2, x3, y1, y2, y3, s1, s2, s3;
    printf("Enter x-coordinate and y-coordinate of 1st point respt. : ");
    scanf("%f %f", &x1, &y1);
    printf("Enter x-coordinate and y-coordinate of 2nd point respt. : ");
    scanf("%f %f", &x2, &y2);
    printf("Enter x-coordinate and y-coordinate of 3rd point respt. : ");
    scanf("%f %f", &x3, &y3);
    s1 =(y2 - y1) / (x2 - x1) ;
    s2 =(y3 - y2) / (x3 - x2) ;
    // printf("%f %f",s1,s2);
    if (s1 == s2)
        printf("All points fall on one straight line");
    else
        printf("All points not fall on one straight line");
    return 0;
}