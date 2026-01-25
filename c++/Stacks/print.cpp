// Normal Print
#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> st;
    stack<int> temp;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // st to temp
    while(st.size()){
        int x=st.top();
        cout<<x<<" ";
        st.pop();
        temp.push(x);
    }
    // temp to st
    while(temp.size()){
        int x=temp.top();
        temp.pop();
        st.push(x);
    }
    cout<<endl<<st.size()<<endl;
    return 0;
}