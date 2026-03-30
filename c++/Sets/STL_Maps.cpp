#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main(){
    // TODO: pair class
    // pair<string,int> p;
    // p.first="Pritam";
    // p.second=48;
    // cout<<p.first<<" "<<p.second<<endl;
    unordered_map<string,int> m;

    // TODO: Method-1
    // pair<string,int> p1;
    // p1.first="Pritam";
    // p1.second=48;
    // pair<string,int> p2;
    // p2.first="Sayan";
    // p2.second=55;
    // pair<string,int> p3;
    // p3.first="Ayush";
    // p3.second=23;
    // pair<string,int> p4;
    // p4.first="Sanket";
    // p4.second=78;
    // m.insert(p1);
    // m.insert(p2);
    // m.insert(p3);
    // m.insert(p4);

    // TODO: Method-2
    m["Pritam"]=48;
    m["Sanket"]=78;
    m["Sayan"]=55;
    m["Ayush"]=23;
    m["Pritam"]=90; // TODO: Keys must be distinct

    // for(pair<string,int> p:m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<"--------"<<endl;

    // TODO: Deletion
    m.erase("Pritam");
    m.erase("Arpita");

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<"--------"<<endl;
    // cout<<m.size()<<endl;

    // TODO: Search
    if(m.find("Sayan")!=m.end()) cout<<"Found"<<endl;
    else cout<<"Not Found"<<endl;
    // cout<<m["Hupi"]<<endl;
    // cout<<m.count("Sayan");
}