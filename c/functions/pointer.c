#include <stdio.h>
int main(){
    int a=4;
    int* x=&a;
    int** y=&x;
    *x=6;
    printf("%d\n",a);
    printf("%p\n",x);
    printf("%p\n",y);
    return 0;
}