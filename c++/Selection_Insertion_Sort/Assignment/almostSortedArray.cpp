// Given an array with n distinct elements. An array is said to be almost sorted (non-decreasing) if 
// any of its elements can occur at a maximum of 1 distance away from their original places in the sorted array. 
// We need to find whether the given array is almost sorted or not.
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
bool isAlmostSorted(vector<int>& v){
    int n=v.size();
    vector<int> v_copy(n);
    for(int i=0;i<n;i++){
        v_copy[i]=v[i];
    }
    sort(v_copy.begin(),v_copy.end());
    bool flag=true;
    for(int i=1;i<n-1;i++){
        if(!(v_copy[i]==v[i] || v_copy[i]==v[i-1] || v_copy[i]==v[i+1])) flag=false;
    }
    if(!(v_copy[0]==v[0] || v_copy[0]==v[1])) flag=false;
    if(!(v_copy[n-1]==v[n-1] || v_copy[n-1]==v[n-2])) flag=false;
    return flag;
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter size of arr : ";
    cin>>n;
    cout<<"Enter elements of arr : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    if(isAlmostSorted(v)) cout<<"Yes";
    else cout<<"No";
}