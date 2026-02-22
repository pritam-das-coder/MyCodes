// Given the length and breadth of a rectangle, 
// write a program to find whether the area of the 
// rectangle is greater than its perimeter
#include<stdio.h>
int main(){
    float l,b,a,p;
    printf("Enter length of rectangle : ");
    scanf("%f",&l);
    printf("Enter breadth of rectangle : ");
    scanf("%f",&b);
    a=l*b;
    p=2*(l+b);
    if(a>p){
        printf("area of the rectangle is greater than its perimeter");
    }
    if(p>a){
        printf("area of the rectangle is less than its perimeter");
    }
    if(a==p){
        printf("area of the rectangle is equal to its perimeter");
    }
    return 0;
}