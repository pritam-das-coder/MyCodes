#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void helper(vector<int>& original,vector<int> ans,int target,int idx,vector<vector<int>>& v){
    if(target==0){
        v.push_back(ans);
        return;
    }
    if(target<0) return;
    for(int i=idx;i<original.size();i++){
        if(i!=0 && original[i]==original[i-1]) continue;
        ans.push_back(original[i]);
        helper(original,ans,target-original[i],i+1,v);
        ans.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector<vector<int>> v;
    sort(candidates.begin(),candidates.end());
    helper(candidates,{},target,0,v);
    return v;
}
int main(){
    vector<int> candidates;
    candidates.push_back(10);
    candidates.push_back(1);
    candidates.push_back(2);
    candidates.push_back(7);
    candidates.push_back(6);
    candidates.push_back(1);
    candidates.push_back(5);
    int target=8;
    vector<vector<int>> v;
    v=combinationSum2(candidates,target);
    for()
}
