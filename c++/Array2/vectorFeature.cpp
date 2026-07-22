#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;
    // v.push_back(3);
    // v.push_back(7);
    // v.push_back(1);
    // v.push_back(-1);
    int x;
    for(int i=0;i<5;i++){
        cin>>x;
        v.push_back(x);
    }
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    // v.pop_back();
    // v.pop_back();
    // v.at(2)=4;
    // cout<<v.at(2);
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}