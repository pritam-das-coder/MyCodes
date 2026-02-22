#include <iostream>
#include <stack>
using namespace std;
int main(){
    int arr[]={2,1,5,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // prev smallest element index array
    int psi[n];
    stack<int> st;
    st.push(0);
    psi[0]=-1;
    for(int i=1;i<n;i++){
        while(st.size() && arr[st.top()]>=arr[i]) st.pop();
        if(st.size()) psi[i]=st.top();
        else psi[i]=-1;
        st.push(i);
    }

    for(int i=0;i<n;i++){
        cout<<psi[i]<<" ";
    }
    return 0;
}