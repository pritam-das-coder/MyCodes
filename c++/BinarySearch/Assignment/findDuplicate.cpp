// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] 
// inclusive in sorted order.  There is only one repeated number in nums, return this 
// repeated number.
#include <iostream>
#include <vector>
using namespace std;
int find(vector<int>& nums){
    int l=nums.size(),sum1=0;
    int n=l-1;
    for(int i=0;i<l;i++) sum1+=nums[i];
    int sum2=n*(n+1)/2;
    return sum1-sum2;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<find(v);
}