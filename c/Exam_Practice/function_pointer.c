#include <stdio.h>
float multiply(float x,float y){
    return (x*y);
}
int main(){
    float (*ptr)(float,float);
    ptr=multiply;
    printf("%f\n",multiply(4,5));
    printf("%f",ptr(4,5));
    return 0;
}