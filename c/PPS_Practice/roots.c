#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    printf("Enter a,b,c of a quardatic equation respectively : ");
    scanf("%f%f%f",&a,&b,&c);
    float x1,x2;
    x1=(-b+sqrt(b*b-4*a*c))/2*a;
    x2=(-b-sqrt(b*b-4*a*c))/2*a;
    printf("Required roots are %f and %f",x1,x2);
    return 0;
}