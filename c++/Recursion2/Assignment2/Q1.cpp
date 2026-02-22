#include <iostream>
#include <vector>
using namespace std;
void reverse(int i,vector<int> v){
    if(i==v.size()) return;
    reverse(i+1,v);
    cout<<v[i]<<" ";
}
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(7);
    v.push_back(9);
    reverse(0,v);
}