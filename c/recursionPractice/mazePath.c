#include <stdio.h>
int maze(int cr,int cc,int n,int m){
    int rightWays=0,downWays=0;
    if(cr==n && cc==m) return 1;
    else if(cr==n){
        rightWays=maze(cr,cc+1,n,m);
    }
    else if(cc==m){
        downWays=maze(cr+1,cc,n,m);
    }
    else{
        rightWays=maze(cr,cc+1,n,m);
        downWays=maze(cr+1,cc,n,m);
    }
    int totalWays=rightWays+downWays;
    return totalWays;
}
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter number of columns : ");
    scanf("%d",&m);
    printf("%d",maze(1,1,n,m));
    return 0;
}