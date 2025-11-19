#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main(){
    int arr[]={12,1,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    // vector<int> ans;
    // for(int i=0;i<=n-k;i++){
    //     for(int j=i;j<i+k;j++){
    //         if(arr[j]<0){
    //             ans.push_back(arr[j]);
    //             break;
    //         }
    //     }
    // }
    // sliding window
    vector<int> ans(n-k+1);
    int p=-1;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            p=i;
            break;
        }
    }
    if(p==-1) ans[0]=0;
    else ans[0]=arr[p];
    int i=1,j=k;
    while(j<n){
        if(p>=i) ans[i]=arr[p];
        else{
            bool flag=false;
            int x;
            for(x=i;x<=j;x++){
                if(arr[x]<0){
                    flag=true;
                    break;
                }
            }
            if(flag){
                p=x;
                ans[i]=arr[p];
            }
            else ans[i]=0;
        }
        i++,j++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}