#include <stdio.h>
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int combination(int n,int r){
    int comb;
    comb=fact(n)/(fact(r)*fact(n-r));
    return comb;
}
int permutation(int n,int r){
    return fact(n)/fact(n-r);
}
int main(){
    int n,r;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter r : ");
    scanf("%d",&r);
    int comb,perm;
    comb=combination(n,r);
    perm=permutation(n,r);
    printf("%dC%d = %d\n",n,r,comb);
    printf("%dP%d = %d",n,r,perm);
    return 0;
}