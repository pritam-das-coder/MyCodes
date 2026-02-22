#include <iostream>
#include <vector>
using namespace std;
void print(int i,int arr[],int n){
    if(i==n) return;
    cout<<arr[i]<<" ";
    print(i+1,arr,n);
}
void print(int i,vector<int>& v){
    if(i==v.size()) return;
    cout<<v[i]<<" ";
    print(i+1,v);
}
int main(){
    //int arr[]={2,4,1,6,8,3};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // print(0,arr,n);
    // for each loop
    // for(int x:arr){
    //     cout<<x<<" ";
    // }
    vector<int> v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(7);
    v.push_back(9);
    print(0,v);
}