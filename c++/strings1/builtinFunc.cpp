#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s="Dcba";
    //cout<<s.size();
    //s.push_back('q');
    //s.pop_back();
    //reverse(s.begin()+1,s.begin()+6);
    // string str="is goat";
    // str=s+" "+str;
    // cout<<str;
    sort(s.begin(),s.end());
    cout<<s;
}