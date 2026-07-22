// Input a string and return the number of times the neighbouring characters are different from each other.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int l=s.size();
    int c=0;
    if(l==1){
        c=0;
    }
    else if(l==2 && s[0]!=s[1]){
        c=1;
    }
    else{
        for(int i=0;i<l;i++){
            if(i==0 && s[i]!=s[i+1]) c++;
            else if(i==l-1 && s[i-1]!=s[i]) c++;
            else if(s[i-1]!=s[i] && s[i+1]!=s[i]) c++;
        }
    }
    cout<<c;
}