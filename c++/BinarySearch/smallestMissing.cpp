#include <iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]!=i){
            flag=true;
            cout<<i;
            break;
        }
    }
    if(flag==false) cout<<n;
}