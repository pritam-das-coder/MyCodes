#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    string s="-/*+79483";
    stack<int> val;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>=48 && s[i]<=57) val.push(s[i]-'0');
        else{
            int val1=val.top();
            val.pop();
            int val2=val.top();
            val.pop();
            int res=0;
            if(s[i]=='+') res=val1+val2;
            else if(s[i]=='-') res=val1-val2;
            else if(s[i]=='*') res=val1*val2;
            else res=val1/val2;
            val.push(res);
        }
    }
    cout<<val.top()<<endl;
}