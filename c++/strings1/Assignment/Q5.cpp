#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    if(s.length()>=10){
        cout<<"Invalid Input";
        return 0;
    }
    int res=0;
    for(int i=0;i<s.length();i++){
        int x=s[i]-48;
        res=res*10+x;
    }
    cout<<res<<endl;
    //cout<<res+1;
}