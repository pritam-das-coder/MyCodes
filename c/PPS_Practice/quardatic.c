#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    printf("Enter a,b,c of a quardatic equation respectively : ");
    scanf("%f%f%f",&a,&b,&c);
    float dis=b*b-4*a*c;
    float x1,x2;
    if(dis>=0){
        x1=(-b+sqrt(dis))/(2*a);
        x2=(-b-sqrt(dis))/(2*a);
        printf("Roots are real and are %g and %g",x1,x2);
    }
    else{
        x1=-b/(2*a);
        x2=sqrt(-dis)/(2*a);
        printf("Roots are imaginary and are %g+%gi and %g-%gi",x1,x2,x1,x2);
    }
    return 0;
}