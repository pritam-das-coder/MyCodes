// Find out whether a given string is palindrome or not using recursion
#include <iostream>
using namespace std;
bool isPalin(string s,int i,int j){
    if(i>=j){
        return true;
    }
    else if(s[i]!=s[j]){
        return false;
    }
    else{
        return isPalin(s,i+1,j-1);
    }
}
int main(){
    string s="abccba";
    cout<<isPalin(s,0,s.length()-1);
}