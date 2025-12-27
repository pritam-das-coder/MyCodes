#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int>& v){
    int n=v.size();
    if(n==1 || n==0) return;
    vector<int> a(n/2);
    vector<int> b(n-n/2);
    int i=0,j=0;
    while(i<n/2){
        a[i]=v[i];
        i++;
    }
    while(i<n){
        b[j]=v[i];
        i++;
        j++;
    }
    sort(a);
    sort(b);
    i=0,j=0;
    int k=0;
    while(i<n/2 && j<(n-n/2)){
        if(a[i]<=b[j]){
            v[k]=a[i];
            k++;
            i++;
        }
        else{
            v[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<a.size()){
        v[k]=a[i];
        i++;
        k++;
    }
    while(j<b.size()){
        v[k]=b[j];
        j++;
        k++;
    }
}
int main(){
    int arr[]={7,1,2,-1,0,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    sort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}