#include <iostream>
#include <vector>
using namespace std;
int c=0;
void merge(vector<int>& a,vector<int>& b,vector<int>& c){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) c[k++]=a[i++];
        else c[k++]=b[j++];
    }
    while(i<a.size()){
        c[k++]=a[i++];
    }
    while(j<b.size()){
        c[k++]=b[j++];
    }
}
int countInversion(vector<int> a,vector<int> b){
    int i=0,j=0,count=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count+=(a.size()-i);
            j++;
        }
        else i++;
    }
    return count;
}
void mergeSort(vector<int>& v){
    int n=v.size();
    if(n==1) return;
    // divide v
    int n1=n/2,n2=n-(n/2);
    vector<int> a(n1),b(n2);
    int i=0,j=0;
    while(i<n1){
        a[i]=v[i];
        i++;
    }
    while(j<n2){
        b[j++]=v[i++];
    }
    // sort a & b
    mergeSort(a);
    mergeSort(b);
    // count
    c+=countInversion(a,b);
    // merge a & b to v
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
    int arr[]={5,1,8,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    mergeSort(v);
    cout<<c;
    //for(int i=0;i<n;i++) cout<<v[i]<<" ";
}