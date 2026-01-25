#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> st;
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
        cout<<st.top()<<" ";
        st.pop();
    }
    // cout<<endl<<st.size()<<endl;
    return 0;
}