//check
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter string 1 : ";
    getline(cin,s);
    cout<<"Enter string 2 : ";
    string t;
    getline(cin,t);
    // anagram
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<"True";
    else cout<<"False";
}