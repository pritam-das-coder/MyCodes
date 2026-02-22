#include <iostream>
using namespace std;
void skip(int i,string str){
    if(i==str.length()) return;
    if(str[i]!='a') cout<<str[i];
    skip(i+1,str);
}
void rchar(string ans,string original){
    if(original.length()==0){
        cout<<ans;
        return;
    }
    else if(original[0]!='a')
        rchar(ans+original[0],original.substr(1));
    else
        rchar(ans,original.substr(1));
}
int main(){
    string str;
    getline(cin,str);
    // // string s="";
    // // for(int i=0;i<str.length();i++){
    // //     if(str[i]!='a') s+=str[i];
    // // }
    // // cout<<s;
    // skip(0,str);
    rchar("",str);
}