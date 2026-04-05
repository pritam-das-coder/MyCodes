// Given an array arr[] of distinct integers. The task is to determine if there exist two pairs (a, b) and (c, d) such that a + b = c + d, where a, b, c, and d are distinct elements. 
// Note: If multiple solutions exist, return any one valid pair.
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
void findPairs(vector<int>& arr){
    int n=arr.size();
    unordered_map<int,pair<int,int>> m;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int sum=arr[i]+arr[j];
            if(m.find(sum)!=m.end()){
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" and ";
                pair<int,int> p=m[sum];
                cout<<"("<<p.first<<","<<p.second<<")"<<endl;
                return;
            }
            pair<int,int> p={arr[i],arr[j]};
            m[sum]=p;
        }
    }
}
int main(){
    vector<int> arr={2,5,1,6};
    findPairs(arr);
}