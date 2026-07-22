#include<stdio.h>
void fun(){
    static int a;// only once
    a=a+10;
    printf("%d\n",a);
}
int main(){
    fun();
    fun();
    return 0;
}