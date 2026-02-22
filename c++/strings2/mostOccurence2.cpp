// Given a string consisting of lowercase English alphabets. Print the character that is occurring most 
// number of times.
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    vector<int> alphabetCount(26);
    for(int i=0;i<s.length();i++){
        int ch=s[i];
        alphabetCount[ch-97]++;
    }
    int maxCount=-1;
    for(int i=0;i<26;i++){
        if(maxCount<alphabetCount[i]) maxCount=alphabetCount[i];
    }
    cout<<maxCount<<endl;
    for(int i=0;i<26;i++){
        if(alphabetCount[i]==maxCount) cout<<(char)(i+97)<<endl;
    }
    // vector<int> a;
    // a.push_back(1);
    // a.push_back(3);
    // vector<int> b;
    // b.push_back(1);
    // b.push_back(2);
    // if(a==b) cout<<"yes";
    // else cout<<"no";
}