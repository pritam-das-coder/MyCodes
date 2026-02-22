// Leetcode 31
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void nextPermutation(vector<int>& nums) {
    // 1) Find pivot index
    int idx=-1,n=nums.size();
    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            idx=i;
            break;
        }
    }
    // for last permutation
    if(idx==-1){
        reverse(nums.begin(),nums.end());
        return;
    }
    // 2) (idx+1) to end -> reverse
    reverse(nums.begin()+idx+1,nums.begin()+n);
    // 3) idx+1 to end find just greater ele than nums[idx]
    int jg=-1;
    for(int i=idx+1;i<n;i++){
        if(nums[idx]<nums[i]){
            jg=i;
            break;
        }
    }
    // 4) swap nums[jg] with nums[idx]
    swap(nums[jg],nums[idx]);
}
int main(){
    vector<int> v;
    v.push_back(-1);
    v.push_back(4);
    v.push_back(-3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(-6);
    v.push_back(8);
    // v.push_back(1);
    // v.push_back(0);
    display(v);
    arrange(v);
    display(v);
}