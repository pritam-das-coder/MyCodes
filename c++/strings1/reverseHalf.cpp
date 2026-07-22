// Input a string of even length and reverse the first half of the string.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    //string s="pritam is goat";
    string s;
    getline(cin,s);
    int len=s.size();
    int i=0,j=(len/2)-1;
    reverse(s.begin()+i,s.begin()+j+1);
    cout<<s;
}