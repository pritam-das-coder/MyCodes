// Given a string consisting of lowercase English alphabets. Print the character that is occurring most 
// number of times.
#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int maxc=INT_MIN;
    for(int i=0;i<s.size();i++){
        char cch=s[i];
        int cc=1;
        for(int j=i+1;j<s.size();j++){
            if(cch==s[j]) cc++;
        }
        if(cc>maxc){
            maxc=cc;
        }
    }
    cout<<maxc<<endl;
    for(int i=0;i<s.size();i++){
        char cch=s[i];
        int cc=1;
        for(int j=i+1;j<s.size();j++){
            if(cch==s[j]) cc++;
        }
        if(cc==maxc) cout<<cch<<endl;
    }
}