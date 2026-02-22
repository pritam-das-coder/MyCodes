#include <iostream>
#include <vector>
using namespace std;
int matrixScore(vector<vector<int>>& grid) {
    int r=grid.size();
    int c=grid[0].size();
    // 0th col all 1
    for(int i=0;i<r;i++){
        if(grid[i][0]==0){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1) grid[i][j]=0;
                else grid[i][j]=1;
            }
        }
    }
    // flip col majority 0
    for(int j=0;j<c;j++){
        int noz=0;
        for(int i=0;i<r;i++){
            if(grid[i][j]==0) noz++;
        }
        if(noz>r/2){
            for(int i=0;i<r;i++){
                if(grid[i][j]==1) grid[i][j]=0;
                else grid[i][j]=1;
            }
        }
    }
    // find score
    int score=0;
    for(int i=0;i<r;i++){
        int m=1;
        for(int j=c-1;j>=0;j--){
            score+=grid[i][j]*m;
            m*=2;
        }
    }
    return score;
}
int main(){
    vector<vector<int>> v;
    for(int i=0;i<3;i++){
        vector<int> a;
        for(int j=0;j<3;j++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        v.push_back(a);
    }
    cout<<matrixScore(v);
}