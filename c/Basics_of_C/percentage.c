// Print percentage of 4 Subjects where marks are out of 40 .
#include<stdio.h>
int main(){
    float m1=30;
    float m2=30;
    float m3=30;
    float m4=30;
    float percent=((m1+m2+m3+m4)*100)/(4*40);
    printf("Required percentage is %f",percent);
    return 0;
}