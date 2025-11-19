#include <stdio.h>
typedef int* p;
int main(){
    int a=3,b=9;
    p x=&a,y=&b;
    printf("%p\n",x);
    printf("%p\n",y);
    return 0;
}