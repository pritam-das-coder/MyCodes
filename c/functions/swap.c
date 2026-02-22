#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two no.s : ");
    scanf("%d%d",&a,&b);
    // int temp=a;
    // a=b;
    // b=temp;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
    return 0;
}