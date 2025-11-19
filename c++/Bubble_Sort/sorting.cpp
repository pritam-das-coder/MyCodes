#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        bool flag=true;// sorted
        cout<<"Pass "<<i+1<<endl;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                flag=false;// not sorted
                swap(arr[j],arr[j+1]);
            }
        }
        if(flag) break;
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}