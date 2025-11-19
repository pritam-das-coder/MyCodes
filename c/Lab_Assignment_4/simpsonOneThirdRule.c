#include <stdio.h>
float f(float x){
    return 1/(1+x*x);
}
int main(){
    float a=0,b=1;
    int n=6;
    float h=(b-a)/n;
    float sum=0;
    int c=0;
    for(float i=a;i<=b;i+=h,c++){
        if(i==a || i==b)
            sum+=(1/f(i)); // user defined function
        else if(c%2==0)
            sum+=2*(1/f(i));// user defined function
        else
            sum+=4*(1/f(i));// user defined function
    }
    sum*=(h/3.0);
    printf("Required value of integral is %f",sum);
    return 0;
}