#include <iostream>
#include <vector>
using namespace std;
void remove(vector<int>& v,vector<int> arr,int idx){
    if(idx==arr.size()) return;
    if(arr[idx]==1) remove(v,arr,idx+1);
    else{
        v.push_back(arr[idx]);
        remove(v,arr,idx+1);
    }
}
int main(){
    vector<int> v,arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(1);
    arr.push_back(9);
    remove(v,arr,0);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}