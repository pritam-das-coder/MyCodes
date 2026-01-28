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
    int ans[n];
    stack<int> st;
    ans[0]=1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(st.size() && arr[st.top()]<=arr[i]) st.pop();
        if(st.size()==0) ans[i]=1;
        else ans[i]=st.top();
        st.push(i);
    }
    for(int i=0;i<n;i++){
        if(ans[i]==1) continue;
        ans[i]=i-ans[i];
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}