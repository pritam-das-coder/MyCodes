#include <iostream>
#include <stack>
using namespace std;
void print(stack<int>& st){
    stack<int> temp;
    // st to temp
    while(st.size()){
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    // temp to st
    while(temp.size()){
        int x=temp.top();
        cout<<x<<" ";
        temp.pop();
        st.push(x);
    }
}
void transfer(stack<int>& a,stack<int>& b){ // a to b
    while(a.size()){
        b.push(a.top());
        a.pop();
    }
}
int main(){
    stack<int> st;
    stack<int> t1;
    stack<int> t2;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    transfer(st,t1);
    transfer(t1,t2);
    transfer(t2,st);


    return 0;
}