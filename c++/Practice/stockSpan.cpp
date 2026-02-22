#include <iostream>
#include <stack>
using namespace std;
int main(){
    int arr[]={100,80,60,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // previous greater index array
    int pgi[n];
    stack<int> st; // index stack
    st.push(0);
    pgi[0]=1;
    for(int i=1;i<n;i++){
        while(st.size() && arr[st.top()]<=arr[i]) st.pop();
        if(st.size()) pgi[i]=st.top();
        else pgi[i]=-1;
        st.push(i);
        pgi[i]=i-pgi[i]; // ans array
    }

    for(int i=0;i<n;i++){
        cout<<pgi[i]<<" ";
    }

    return 0;
}