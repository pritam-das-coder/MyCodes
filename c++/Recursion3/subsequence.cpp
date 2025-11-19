// Print all increasing sequences of length k from first n natural numbers.
#include <iostream>
#include <vector>
using namespace std;
void store(vector<int> seq,vector<int>& original,vector<vector<int>>& ans,int idx,int k){
    if(idx==original.size()){
        if(seq.size()==k) ans.push_back(seq);
        return;
    }
    store(seq,original,ans,idx+1,k);
    if((seq.size()+(original.size()-idx))<k) return;
    seq.push_back(original[idx]);
    store(seq,original,ans,idx+1,k);
}
int main(){
    vector<int> seq;
    cout<<"Enter n : ";
    int n;
    cin>>n;
    vector<int> original;
    for(int i=1;i<=n;i++){
        original.push_back(i);
    }
    vector<vector<int>> ans;
    cout<<"Enter k : ";
    int k;
    cin>>k;
    store(seq,original,ans,0,k);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}