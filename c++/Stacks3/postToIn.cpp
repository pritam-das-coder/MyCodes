#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    string s="79+4*8/3-";
    stack<string> val;
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57) val.push(to_string(s[i]-'0'));
        else{
            string val2=val.top();
            val.pop();
            string val1=val.top();
            val.pop();
            string res="";
            // res+="(";
            res+=val1;
            res.push_back(s[i]);
            res+=val2;
            // res+=")";
            val.push(res);
        }
    }
    cout<<val.top()<<endl;
}