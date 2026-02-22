#include <iostream>
#include <stack>
#include <string>
using namespace std;
int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else if(ch=='*' || ch=='/') return 2;
    else return -1;
}
void solve(stack<string>& val,stack<char>& op){
    char ch=op.top();
    op.pop();
    string val2=val.top();
    val.pop();
    string val1=val.top();
    val.pop();
    string res="";
    res.push_back(ch);
    res+=val1+val2;
    val.push(res);
}
int main(){
    string str="2+6*4/8-3";
    stack<string> val;
    stack<char> op;
    for(int i=0;i<str.length();i++){
        if(isdigit(str[i])){
            val.push(to_string(str[i]-'0'));
        }
        else{
            if(op.size()==0 || priority(str[i])>priority(op.top())){
                op.push(str[i]);
            }
            else{
                while(op.size() && priority(str[i])<=priority(op.top())){
                    solve(val,op);
                }
                op.push(str[i]);
            }
        }
    }
    while(op.size()){
        solve(val,op);
    }
    cout<<val.top()<<endl;
}