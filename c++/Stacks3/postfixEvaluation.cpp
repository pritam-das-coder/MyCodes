#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    string str="79+4*8/3-";
    stack<int> val;
    for(int i=0;i<str.length();i++){
        if(isdigit(str[i])){
            val.push(str[i]-'0');
        }
        else{
            int val2=val.top();
            val.pop();
            int val1=val.top();
            val.pop();
            int res=0;
            if(str[i]=='+') res=val1+val2;
            else if(str[i]=='-') res=val1-val2;
            else if(str[i]=='*') res=val1*val2;
            else res=val1/val2;
            val.push(res);
        }
    }
    cout<<val.top()<<endl;
}