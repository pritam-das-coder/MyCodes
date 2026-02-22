#include<stdio.h>
int main(){
    int a=10;
    void fun(){
        printf("Within fun");
    }
    printf("%d\n",a);
    fun();
}