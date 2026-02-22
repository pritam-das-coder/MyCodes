// Remove kth element from top in a given stack.
#include <iostream>
#include <stack>
using namespace std;
void print(stack<int>& st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    print(st);
    cout<<x<<" ";
    st.push(x);
}
int main(){
    stack<int> st;
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++) st.push(arr[i]);
    int k=4;
    print(st);
    cout<<endl;

    stack<int> gt;
    for(int i=1;i<k;i++){
        gt.push(st.top());
        st.pop();
    }
    st.pop();
    while(gt.size()){
        st.push(gt.top());
        gt.pop();
    }
    print(st);
    cout<<endl;

    return 0;
}