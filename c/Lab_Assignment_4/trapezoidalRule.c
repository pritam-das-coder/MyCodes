#include <stdio.h>
float f(float x){
    return 1/(1+x);
}
int main(){
    float h=1;
    float a=0,b=5;
    float sum=0;
    for(float i=a;i<=b;i+=h){
        if(i==a || i==b)
            sum+=f(i);// using user defined function
        else
            sum+=2*f(i);// using user defined function
    }
    sum=sum*(h/2);
    printf("Required value of integral is %f",sum);// for printing
    return 0;
}