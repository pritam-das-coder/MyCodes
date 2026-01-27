 #include <iostream>
#include <stack>
#include <string>
using namespace std;
void check(string s){
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
}
int main(){
    
    return 0;
}