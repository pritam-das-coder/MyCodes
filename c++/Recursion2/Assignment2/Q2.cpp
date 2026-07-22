#include <iostream>
#include <vector>
using namespace std;
void find(int i,vector<int> v,int ele){
    if(i==v.size()){
        cout<<-1;
        return;
    }
    if(v[i]==ele){
        cout<<i;
        return;
    }
    find(i+1,v,ele);
}
int main(){
    vector<int> v;
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);
    v.push_back(1);
    v.push_back(3);
    int ele;
    cin>>ele;
    find(0,v,ele);
}