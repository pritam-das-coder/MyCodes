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
void pushAtBottomRec(stack<int>& st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    pushAtBottomRec(st,val);
    st.push(x);
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
    //pushAtBottom(st,50);
    pushAtBottomRec(st,60);
    print(st);

    return 0;
}