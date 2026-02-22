#include <stdio.h>
#define PI 3.14159265359
#define areaOfCircle(r) (PI*r*r)
#define areaOfRectangle(l,b) (l*b)
int main(){
    // int r;
    // printf("Enter radius : ");
    // scanf("%d",&r);
    //PI=4.5;//error
    float x=areaOfRectangle(2.3,3);
    printf("%f",x);
    //printf("%f",areaOfRectangle(3.2,4));
    return 0;
}