#include <stdio.h>
int maze(int n,int m){
    int rightWays=0;// no. of ways by going to right
    int downWays=0;// no. of ways by going to down
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
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    printf("Enter no. of columns : ");
    scanf("%d",&m);
    int noOfWays=maze(n,m);
    printf("%d",noOfWays);
    return 0;
}