#include <iostream>
#include <vector>
using namespace std;
void cycleSort(vector<int>& v){
    int i=0;
    while(i<v.size()){
        if((v[i]-1)==i) i++;
        else swap(v[i],v[v[i]-1]);
    }
}
int main(){
    int arr[]={5,1,6,3,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    cycleSort(v);
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
}