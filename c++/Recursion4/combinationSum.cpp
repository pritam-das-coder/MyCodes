#include <iostream>
#include <vector>
using namespace std;
void print(vector<int>& original,int target,vector<int> ans,int idx){
    if(target==0){
        for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
        cout<<endl;
        return;
    }
    if(target<0) return;
    for(int i=idx;i<original.size();i++){
        ans.push_back(original[i]);
        print(original,target-original[i],ans,i);
        ans.pop_back();
    }
}
int main(){
    //vector<int> ans;
    vector<int> original;
    original.push_back(2);
    original.push_back(3);
    original.push_back(5);
    //original.push_back(7);
    print(original,8,{},0);
}