#include <iostream>
#include <set>
#include <map>
#include <string>
using namespace std;
int main(){
    // TODO: ORDERED SET
    // set<int> s;
    // s.insert(5);
    // s.insert(0);
    // s.insert(3);
    // s.insert(6);
    // s.insert(9);
    // s.erase(3);
    // for(int ele:s){
    //     cout<<ele<<" ";
    // }
    // cout<<endl;
    
    // TODO: ORDERED MAP
    map<string,int> m;
    m["Pritam"]=48;
    m["Arun"]=99;
    m["Sayan"]=23;
    m["Raghav"]=80;
    m.erase("Pritam");
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
}