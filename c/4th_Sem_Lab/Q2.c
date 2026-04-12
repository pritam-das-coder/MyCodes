// a^b
#include <stdio.h>
int pow(int a,int b){
    if(b==0) return 1;
    if(b==1) return a;
    return a*pow(a,b-1);
}
int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    printf("%d to the power %d is %d\n",a,b,pow(a,b));
}