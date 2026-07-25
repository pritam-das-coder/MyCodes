#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX_ITR 500
#define MAX_ERROR 0.0001
float f(float x){ // the given function 
    return 3*x*x*x-9*x*x+8;
}
float fderivative(float x){ // function to find value of derivative at a point
    float h=0.001;
    return ((f(x+h)-f(x))/h);
}
int main(){ // main function
    float x0;
    printf("Enter the initial value of x : ");
    scanf("%f",&x0);
    if(x0==0){
        printf("Derivative becomes zero. Method fails");
        exit(EXIT_FAILURE);
    }
    int itr=0;
    float x1;
    do{
        x1=x0-(f(x0)/fderivative(x0));
        x0=x1;
        itr++;
    }while(itr<MAX_ITR && fabs(f(x1))>MAX_ERROR);
    printf("The root of given equation is %f",x1);
    return 0;
}