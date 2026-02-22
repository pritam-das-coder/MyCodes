#include <iostream>
#include <stack>
#include <string>
using namespace std;
int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else if(ch=='*' || ch=='/') return 2;
    else return -1;
}
void solve(stack<int>& val,stack<char>& op){
    char ch=op.top();
    op.pop();
    int val2=val.top();
    val.pop();
    int val1=val.top();
    val.pop();
    int res=0;
    if(ch=='+') res=val1+val2;
    else if(ch=='-') res=val1-val2;
    else if(ch=='*') res=val1*val2;
    else if(ch=='/') res=val1/val2;
    else res=-1;
    val.push(res);
}
int main(){
    string str="2+6*5/3-5";
    stack<int> val;
    stack<char> op;
    for(int i=0;i<str.length();i++){
        if(isdigit(str[i])){
            val.push(str[i]-48);
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