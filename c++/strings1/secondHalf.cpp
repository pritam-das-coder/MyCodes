// Input a string of even length and return the second half of that string using inbuilt substr function
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int l=s.size();
    cout<<s.substr(l/2);

}