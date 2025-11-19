// Print all the increasing sequences of length k from first n natural numbers.
#include <iostream>
#include <vector>
using namespace std;
void store(vector<int> sub,int idx,vector<int>& original,vector<vector<int>>& ans,int k){
    if(idx==original.size()){
        if(sub.size()==k) ans.push_back(sub);
        return;
    }
    store(sub,idx+1,original,ans,k);
    if(sub.size()+original.size()<k) return;
    sub.push_back(original[idx]);
    store(sub,idx+1,original,ans,k);
}
void print2D(vector<vector<int>>& v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++) cout<<v[i][j]<<" ";
        cout<<endl;
    }
}
int main(){
    vector<int> original;
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        original.push_back(i);
    }
    vector<vector<int>> ans;
    store({},0,original,ans,k);
    print2D(ans);
}