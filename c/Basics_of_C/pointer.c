// Swapping 
#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=10,y=20;
    printf("Before swap:\n");
    printf("%d\n",x);
    printf("%d\n",y);
    swap(&x,&y);
    printf("After swap:\n");
    printf("%d\n",x);
    printf("%d\n",y);
}