// Copy stack into another stack in same order 
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void print(stack<int>& st){
    if(st.size()==0){
        cout<<"Stack is Empty"<<endl;
        return;
    } 
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
void transfer(stack<int>& a,stack<int>& b){
    while(a.size()){
        b.push(a.top());
        a.pop();
    }
}
int main(){
    stack<int> st;
    stack<int> gt;
    stack<int> temp;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    print(st);

    transfer(st,temp);
    transfer(temp,gt);

    print(gt);
    print(st);
    return 0;
}