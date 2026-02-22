#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string t=s;
    reverse(t.begin(),t.end());
    s=s+t;
    cout<<s;
}