#include <stdio.h>
void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a,b;
    printf("Enter two no.s : ");
    scanf("%d%d",&a,&b);
    printf("Before swapping:\n");
    printf("%d %d\n",a,b);
    swap(&a,&b);
    printf("After swapping:\n");
    printf("%d %d\n",a,b);
    return 0;
}