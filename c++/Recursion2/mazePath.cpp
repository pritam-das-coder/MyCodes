#include <iostream>
#include <string>
using namespace std;
int maze(int crow,int ccol,int r,int c){
    int noOfWays=0,rightWays=0,downWays=0;
    if(crow==r && ccol==c) return 1;
    else if(crow==r) rightWays=maze(crow,ccol+1,r,c);
    else if(ccol==c) downWays=maze(crow+1,ccol,r,c);
    else{
        rightWays=maze(crow,ccol+1,r,c);
        downWays=maze(crow+1,ccol,r,c);
    }
    noOfWays=rightWays+downWays;
    return noOfWays;
}
void printPath(int crow,int ccol,int r,int c,string s){
    if(crow==r && ccol==c){
        cout<<s<<endl;
        return;
    }
    else if(crow==r){
        printPath(crow,ccol+1,r,c,s+"R"); // right
    }
    else if(ccol==c){
        printPath(crow+1,ccol,r,c,s+"D"); // down
    }
    else{
        printPath(crow,ccol+1,r,c,s+"R"); // right
        printPath(crow+1,ccol,r,c,s+"D"); // down
    }
}
int maze2(int r,int c){
    int rightWays=0,downWays=0,totalWays=0;
    if(r==1 && c==1) return 1;
    else if(r==1) rightWays=maze2(r,c-1);
    else if(c==1) downWays=maze2(r-1,c);
    else{
        rightWays=maze2(r,c-1);
        downWays=maze2(r-1,c);
    }
    totalWays=rightWays+downWays;
    return totalWays;
}
void printPath2(int r,int c,string s){
    int rW=0,dW=0,tW=0;
    if(r==1 && c==1){
        cout<<s<<endl;
        return;
    }
    else if(r==1) printPath2(r,c-1,s+"R");
    else if(c==1) printPath2(r-1,c,s+"D");
    else{
        printPath2(r,c-1,s+"R");
        printPath2(r-1,c,s+"D");
    }
}
int main(){
    int r,c;
    cout<<"Enter row & cols respt. : ";
    cin>>r>>c;
    // cout<<maze(1,1,r,c)<<endl;
    // printPath(1,1,r,c,"");
    cout<<maze2(r,c)<<endl;
    printPath2(r,c,"");
}