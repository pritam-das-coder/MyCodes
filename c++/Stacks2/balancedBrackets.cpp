#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool check(string s){
    if(s.size()%2!=0) return false;
    stack<char> st;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(ch=='('){
            st.push(ch);
        }
        else{
            if(st.size()==0) return false;
            st.pop();
        }
    }
    return (st.size()==0);
}
int main(){
    cout<<check("())()(");
    return 0;
}