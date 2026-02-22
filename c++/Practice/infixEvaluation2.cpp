#include <iostream>
#include <stack>
#include <string>
using namespace std;
int pr(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2; // *,/
}
void solve(stack<int>& val,stack<char>& op){
    char ch=op.top();
    op.pop();
    int val2=val.top();
    val.pop();
    int val1=val.top();
    val.pop();
    int ans=0;
    if(ch=='+') ans=val1+val2;
    else if(ch=='-') ans=val1-val2;
    else if(ch=='*') ans=val1*val2;
    else ans=val1/val2;
    val.push(ans);
}
int main(){
    string s="1+(2+6*9)*4/(8-3)";
    stack<int> val;
    stack<char> op;
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57) val.push(s[i]-'0');
        else{
            if(op.size()==0) op.push(s[i]);
            else if(s[i]=='(' || op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='(') solve(val,op);
                op.pop();
            }
            else if(pr(s[i])>pr(op.top())) op.push(s[i]);
            else{
                while(op.size() && pr(s[i])<=pr(op.top())) solve(val,op);
                op.push(s[i]);
            }
        }
    }
    while(op.size()) solve(val,op);
    cout<<val.top()<<endl;
    cout<<1+(2+6*9)*4/(8-3);
}