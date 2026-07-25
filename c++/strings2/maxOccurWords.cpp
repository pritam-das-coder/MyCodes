// Given a sentence ‘str’, return the word that is occurring most number of times in that sentence.
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    vector<string> words;
    string temp;
    while(ss>>temp){
        words.push_back(temp);
    }
    sort(words.begin(),words.end());
    int maxCount=-1,count=1;
    for(int i=1;i<words.size();i++){
        if(words[i]==words[i-1]){
            count++;
        }
        else count=1;
        maxCount=max(maxCount,count);
    }
    cout<<maxCount<<endl;
    count=1;
    for(int i=1;i<words.size();i++){
        if(words[i]==words[i-1]){
            count++;
        }
        else count=1;
        if(maxCount==count) cout<<words[i]<<endl;
    }
}