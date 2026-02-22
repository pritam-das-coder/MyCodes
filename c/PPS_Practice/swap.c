#include <stdio.h>
int main(){
    int a = -7, b = -1;
    printf("Before swapping :\na = %d b = %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping :\na = %d b = %d",a,b);
    return 0;
}