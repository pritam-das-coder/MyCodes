#include <iostream>
#include <vector>
using namespace std;
void storeSubset(vector<int> sub,vector<int>& original,int idx,vector<vector<int>>& ans){
    if(idx==original.size()){
        ans.push_back(sub);
        return;
    }
    storeSubset(sub,original,idx+1,ans);
    sub.push_back(original[idx]);
    storeSubset(sub,original,idx+1,ans);
}
int main(){
    vector<int> sub;
    vector<int> original;
    original.push_back(1);
    original.push_back(2);
    original.push_back(3);
    original.push_back(4);
    vector<vector<int>> ans;
    storeSubset(sub,original,0,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}