#include <iostream>
#include <stack>
using namespace std;
void pushAtIndex(stack<int>& st,int idx,int val){
    stack<int> temp;
    int x=st.size()-idx;
    for(int i=0;i<x;i++){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()){
        st.push(temp.top());
        temp.pop();
    }
}
void pushAtIndex2(stack<int>& st,int idx,int val){
    stack<int> temp;
    while(st.size()!=idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()){
        st.push(temp.top());
        temp.pop();
    }
}
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
    cout<<endl;
}
int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    pushAtIndex2(st,3,90);

    print(st);

    return 0;
}