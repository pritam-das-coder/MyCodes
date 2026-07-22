#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int i=0,j=s.length()-1;
    bool f=true;
    while(i<j){
        if(s[i]!=s[j]){
            f=false;
            break;
        }
        i++;
        j--;
    }
    if(f) cout<<"Yes";
    else cout<<"No";
}