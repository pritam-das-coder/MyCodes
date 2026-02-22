#include <iostream>
#include <stack>
#include <string>
using namespace std;
string removeConsecutiveCharacter(string& s) {
    stack<char> st;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(st.top()!=s[i]) st.push(s[i]);
    }
    string ans="";
    while(st.size()){
        ans=st.top()+ans;
        st.pop();
    }
    return ans;
}
int main(){
    string s="aabaa";
    cout<<removeConsecutiveCharacter(s);
    return 0;
}