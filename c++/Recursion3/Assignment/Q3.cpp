#include <iostream>
#include <vector>
using namespace std;
void store(vector<int>& A,vector<int>& B,bool flag,int ciA,int ciB,vector<int> ele,vector<vector<int>>& ans){
    if(ciA==0 && ciB==0){
        ele.push_back(A[0]);
        store(A,B,false,0,0,ele,ans);
        return;
    }
    if(flag==false){
        for(int i=ciB;i<B.size();i++){
            if(B[i]>A[ciA]){
                ele.push_back(B[i]);
                store(A,B,true,ciA+1,i,ele,ans);
                ans.push_back(ele);
                return;
                //ele.pop_back();
            }
        }
    }
    else{
        for(int i=ciA;i<A.size();i++){
            if(A[i]>B[ciB]){
                ele.push_back(A[i]);
                store(A,B,false,i,ciB+1,ele,ans);
                //ele.pop_back();
            }
        }
    }

}
void print2D(vector<vector<int>>& v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++) cout<<v[i][j]<<" ";
        cout<<endl;
    }
}
int main(){
    vector<int> A,B;
    A.push_back(10);
    A.push_back(15);
    A.push_back(25);
    B.push_back(1);
    B.push_back(5);
    B.push_back(20);
    B.push_back(30);
    vector<vector<int>> ans;
    store(A,B,true,0,0,{},ans);
    print2D(ans);
}