#include <stdio.h>
int maze(int cr,int cc,int er,int ec){
    int rightWays=0;// no. of ways by going to right
    int downWays=0;// no. of ways by going to down
    if(cr==er && cc==ec) return 1;
    else if(cr==er) rightWays=maze(cr,cc+1,er,ec);
    else if(cc==ec) downWays=maze(cr+1,cc,er,ec);
    else{
        rightWays=maze(cr,cc+1,er,ec);
        downWays=maze(cr+1,cc,er,ec);
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
    int noOfWays=maze(1,1,n,m);
    printf("%d",noOfWays);
    return 0;
}