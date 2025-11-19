//  Given an array of integers, sort it in descending order using merge sort algorithm.
#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& a,vector<int>& b,vector<int>& c){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]) c[k++]=a[i++];
        else c[k++]=b[j++];
    }
    while(i<a.size()){
        c[k++]=a[i++];
    }
    while(j<b.size()){
        c[k++]=b[j++];
    }
}
void mergeSort(vector<int>& v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2,n2=n-n/2;
    vector<int> a(n1),b(n2);
    int i=0,j=0;
    while(i<n1){
        a[i]=v[i];
        i++;
    }
    while(j<n2){
        b[j]=v[i];
        j++,i++;
    }
    mergeSort(a);
    mergeSort(b);
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
    int arr[]={5,1,9,3,2,1,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    mergeSort(v);
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
}