#include <iostream>
#include <vector>
using namespace std;
void change(vector<int> &a){
    a[0]=4;
}
int main(){
    vector<int> v;
    // insert element
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    for(int i=0;i<4;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0;i<4;i++){
        cout<<v[i]<<" ";
    }
}