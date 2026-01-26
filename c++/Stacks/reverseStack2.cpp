// Reverse a stack using an extra array
#include <iostream>
#include <stack>
#include <vector>
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
    cout<<endl;
}
int main(){
    stack<int> st;
    vector<int> v;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    print(st);

    while(st.size()){
        int x=st.top();
        st.pop();
        v.push_back(x);
    }
    int i=0;
    while(i<v.size()){
        st.push(v[i]);
        i++;
    }

    print(st);

    return 0;
}