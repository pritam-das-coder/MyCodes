 #include <iostream>
#include <stack>
#include <string>
using namespace std;
bool check(string s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(ch=='('){
            st.push(ch);
        }
        else{
            st.pop();
        }
    }
    return (st.size()==0);
}
int main(){
    
    return 0;
}