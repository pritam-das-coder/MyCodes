#include <iostream>
#include <vector>
#include <climits>
#include <string>
using namespace std;
void printSubset(int arr[],int n,int idx,vector<int> v){
    if(idx==n){
        for(int x:v){
            cout<<x<<" ";
        }
        cout<<endl;
        return;
    }
    printSubset(arr,n,idx+1,v);
    v.push_back(arr[idx]);
    printSubset(arr,n,idx+1,v);
    //v.pop_back();
}
int main(){
    int arr[]={1,2,3};
    int n=sizeof(arr)/4;
    vector<int> v;
    printSubset(arr,n,0,v);
}