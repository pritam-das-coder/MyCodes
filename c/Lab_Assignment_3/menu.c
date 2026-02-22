// Write a Program in C to calculate the area of a triangle, rectangle or
// a circle using function depending on the choice entered by the user.
//  1. Triangle
//  2. Rectangle
//  3. Circle
//  4. Exit
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
void areaOfTriangle()
// to calculate area of triangle
{ 
    float b, h;
    printf("Enter base of triangle : ");
    scanf("%f", &b);
    printf("Enter height of triangle : ");
    scanf("%f", &h);
    float area = (0.5 * b * h);
    printf("Area of Triangle is %f", area);
    return;
}
void areaOfRectangle()
// to calculate area of rectangle
{ 
    float l, b;
    printf("Enter length of rectangle : ");
    scanf("%f", &l);
    printf("Enter breadth of rectangle : ");
    scanf("%f", &b);
    float area = (l * b);
    printf("Area of Rectangle is %f", area);
    return;
}
void areaOfCircle()
// to calculate area of circle
{ 
    float r;
    printf("Enter radius of circle : ");
    scanf("%f", &r);
    float area = M_PI * r * r;
    printf("Area of Circle is %f", area);
    return;
}
int main() // main function
{
    int ch;
    printf("   MENU\n1.Triangle\n2.Rectangle\n3.Circle\n4.Exit\n");// for printing
    bool flag = false;
    while (true)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &ch); // taking input
        switch (ch)
        {
        case 1:
            areaOfTriangle();
            break;
        case 2:
            areaOfRectangle();
            break;
        case 3:
            areaOfCircle();
            break;
        case 4:
            printf("Program Ends");
            flag = true;
            break;
        default:
            printf("INVALID INPUT!");
        }
        if (flag)
            break;
    }
    return 0;
}