#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> st;
    stack<int> temp;
    // cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // cout<<st.size()<<endl;
    // st.pop();
    // cout<<st.size()<<endl;
    // cout<<st.top()<<endl;
    while(st.size()){
        int x=st.top();
        cout<<x<<" ";
        st.pop();
        temp.push(x);
    }
    // cout<<endl<<st.size()<<endl;
    return 0;
}