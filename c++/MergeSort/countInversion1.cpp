#include <iostream>
#include <vector>
using namespace std;
int main(){
    //int arr[]={5,1,8,2,3};
    int arr[]={4,7,1,8,3,9,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]) c++;
        }
    }
    cout<<c;
}