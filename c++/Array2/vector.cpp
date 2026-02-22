#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    // insert element
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    // char x;
    // for(int i=0;i<4;i++){
    //     cin>>x;
    //     v.push_back(x);
    // }
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
    v[1]=5;
    for(int i=0;i<4;i++){
        cout<<v[i]<<" ";
    }
}