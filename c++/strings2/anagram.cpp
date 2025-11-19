// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s,t;
    cout<<"Enter 1st string : ";
    getline(cin,s);
    cout<<"Enter 2nd string : ";
    getline(cin,t);
    int l1=s.size(),l2=t.size();
    if(l1!=l2) cout<<"No";
    else{
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        // bool f=true;
        // for(int i=0;i<l1;i++){
        //     if(s[i]!=t[i]){
        //         f=false;
        //         break;
        //     }
        // }
        // if(f) cout<<"Yes";
        // else cout<<"No";
        if(s==t) cout<<"Yes";
        else cout<<"No";
    }

}