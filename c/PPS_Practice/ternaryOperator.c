#include <stdio.h>
int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    printf((x%2==0)?"Even":"Odd");
    return 0;
}