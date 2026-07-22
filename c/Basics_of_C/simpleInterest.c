#include<stdio.h>
int main(){
    float p,r,t;
    printf("Enter principal : ");
    scanf("%f",&p);
    printf("Enter rate : ");
    scanf("%f",&r);
    printf("Enter time : ");
    scanf("%f",&t);
    float SI=p*r*t/100;
    printf("The simple interest is : %f",SI);
    return 0;
}