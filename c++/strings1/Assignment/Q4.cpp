#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int l=s.length();
    if(l%2!=0){
        cout<<"Enter even length";
        return 0;
    }
    reverse(s.begin()+(l/2),s.end());
    cout<<s;
}