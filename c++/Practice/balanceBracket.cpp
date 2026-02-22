#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isBalanced(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') st.push(s[i]);
        else{
            if(st.size()==0) return false;
            st.pop();
        }
    }
    return (st.size()==0);
}
int main(){
    string s="()(())()";
    cout<<isBalanced(s);
}