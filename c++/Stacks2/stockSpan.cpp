#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    int arr[]={100,80,81,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // finding ans array
    // SC=O(n) TC=O(n)
    int pgi[n];
    stack<int> st;
    pgi[0]=-1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(st.size() && arr[st.top()]<=arr[i]) st.pop();
        if(st.size()==0) pgi[i]=-1;
        else pgi[i]=st.top();
        st.push(i);
    }
    int span[n];
    for(int i=0;i<n;i++){
        span[i]=i-pgi[i];
    }

    for(int i=0;i<n;i++){
        cout<<span[i]<<" ";
    }
    cout<<endl;
}