#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX_ITR 500
#define MAX_ERROR 0.0001

float f(float x){ //user defined function
    return 2*x-3*cos(x)-1.85;
}
int main(){
    int a=0,b=2,itr=0;
    if(f(a)*f(b)>=0){
        printf("No sign change in the interval. Cannot apply Regular-Falsi method.");
        exit(EXIT_FAILURE);
    }
    float c=1.0;
    while(itr<=MAX_ITR && fabs(f(c))>MAX_ERROR){
        c=a-((f(a)*(b-a))/(f(b)-f(a)));
        if(f(c)*f(a)<0)
            b=c;
        else
            a=c;
        itr++;
    }
    printf("The root of given equation in interval [0,2] is %f",c);
    return 0;
}