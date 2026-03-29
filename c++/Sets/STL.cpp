#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    // s.erase(4);
    // s.erase(4);
    // cout<<s.size()<<endl;
    // IMP:- print -> for each
    // for(int ele:s){
    //     cout<<ele<<" ";
    // }
    // cout<<endl;
    // search-> find()
    if(s.find(4)!=s.end()){
        cout<<"Found"<<endl;
    }
    else cout<<"Not found"<<endl;
    // cout<<*s.end()<<endl;
}