//check
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    stringstream ss(str);
    vector<string> v;
    string t;
    while(ss>>t){
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1];
}