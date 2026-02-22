#include <stdio.h>
typedef int* pointer;
int main(){
    int a=4,b=5;
    pointer x=&a,y=&b; // int *x and int y
    printf("%p\n",x);
    printf("%p\n",y);
    return 0;
}