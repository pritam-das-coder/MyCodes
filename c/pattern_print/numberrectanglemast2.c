#include <stdio.h>
int minimum(int a,int b){
    if(a<b) return a;
    else return b;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a=i;
            int b=j;
            if(a>n) a=2*n-a;
            if(b>n) b=2*n-b;
            int min=0;
            min=minimum(a,b);
            printf("%d",n+1-min);
        }
        printf("\n");
    }
    return 0;
}