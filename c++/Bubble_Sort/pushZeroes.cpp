// Push zeroes to end while maintaining the relative order of other elements.
#include <iostream>
using namespace std;
int main(){
    int arr[]={5,1,0,3,0,7,0,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
                flag=false;
                swap(arr[j],arr[j+1]);
            }
        }
        if(flag) break;
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}