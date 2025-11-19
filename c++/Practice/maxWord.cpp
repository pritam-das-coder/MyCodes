// Given a sentence ‘str’, return the word that is occurring most number of times in that sentence.
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    stringstream s(str);
    vector<string> word;
    string t;
    while(s>>t){
        word.push_back(t);
    }
    sort(word.begin(),word.end());
    int maxc=1,c=1;
    for(int i=1;i<word.size();i++){
        if(word[i-1]==word[i]) c++;
        else c=1;
        maxc=max(maxc,c);
    }
    cout<<maxc<<endl;
    c=1;
    for(int i=1;i<word.size();i++){
        if(word[i-1]==word[i]) c++;
        else c=1;
        if(c==maxc) cout<<word[i]<<endl;
    }
}