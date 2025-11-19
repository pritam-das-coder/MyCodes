//check
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    char max=s[0],smax=s[0];
    for(int i=1;i<s.length();i++){
        char ch=s[i];
        if(ch>max){
            smax=max;
            max=ch;
        }
        else if(ch>smax){
            smax=ch;
        }
    }
    cout<<smax;
}