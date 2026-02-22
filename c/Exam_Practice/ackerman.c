#include <stdio.h>
int A(int m,int n){
    if(m==0)
        return (n+1);
    else if(m>0 && n==0)
        return A(m-1,1);
    else{
        int x=A(m,n-1);
        return A(m-1,x);
    }
}
int main(){
    int m,n;
    printf("Enter two non-negative integers : ");
    label:
    scanf("%d%d",&m,&n);
    if(!(m>=0 && n>=0)){
        printf("Enter non-negative integers only : ");
        goto label;
    }
    printf("A(%d,%d) = %d",m,n,A(m,n));
    return 0;
}