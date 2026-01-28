#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    int arr[]={3,1,7,5,4,9,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // finding ans array
    // SC=O(n) TC=O(n)
    int ans[n];
    stack<int> st;
    ans[0]=-1;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        while(st.size() && st.top()<=arr[i]) st.pop();
        if(st.size()==0) ans[i]=-1;
        else ans[i]=st.top();
        st.push(arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}