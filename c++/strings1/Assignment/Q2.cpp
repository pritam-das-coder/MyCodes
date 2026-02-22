#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') c++;
    }
    cout<<s.length()-c;
}