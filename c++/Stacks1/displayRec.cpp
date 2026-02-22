#include <iostream>
#include <stack>
using namespace std;
// Print a stack in reverse order by recursion
void printRecRev(stack<int>& st){
    if(st.size()==0) return;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    printRecRev(st);
    st.push(x);
}
// Print a stack in normal order by recursion
void printRec(stack<int>& st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    printRec(st);
    cout<<x<<" ";
    st.push(x);
}
int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    printRec(st);

    return 0;
}