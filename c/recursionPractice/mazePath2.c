#include <stdio.h>
int maze(int n,int m){
    int rightWays=0,downWays=0;
    if(n==1 && m==1) return 1;
    else if(n==1) rightWays=maze(n,m-1);
    else if(m==1) downWays=maze(n-1,m);
    else{
        rightWays=maze(n,m-1);
        downWays=maze(n-1,m);
    }
    int totalWays=rightWays+downWays;
    return totalWays;
}
int main(){
    int n,m;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    printf("Enter number of columns : ");
    scanf("%d",&m);
    printf("%d",maze(n,m));
    return 0;
}