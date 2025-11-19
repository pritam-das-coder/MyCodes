#include <iostream>
using namespace std;
void rchar(string s,string str){
    if(str.length()==0){
        cout<<s;
        return;
    }
    if(str[0]=='a') rchar(s,str.substr(1));
    else rchar(s+str[0],str.substr(1));
}
void rchar2(string s,string str,int idx){
    if(str.length()==idx){
        cout<<s;
        return;
    }
    if(str[idx]=='a') rchar2(s,str,idx+1);
    else rchar2(s+str[idx],str,idx+1);
}
int main(){
    string str;
    getline(cin,str);
    //rchar("",str);
    rchar2("",str,0);
}