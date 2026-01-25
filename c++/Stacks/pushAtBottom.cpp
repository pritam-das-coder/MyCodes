#include <iostream>
#include <stack>
using namespace std;
void pushAtBottom(stack<int>& st,int val){
    stack<int> temp;
    while(st.size()){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    stack<int> temp;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    
    return 0;
}