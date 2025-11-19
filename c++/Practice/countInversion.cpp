#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& a,vector<int>& b,vector<int>& c){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) c[k++]=a[i++];
        else c[k++]=b[j++];
    }
    while(i<a.size()){
        c[k++]=a[i++];
    }
    while(j<b.size()){
        c[k++]=b[j++];
    }
}
int inversion(vector<int>& a,vector<int>& b){
    int i=0,j=0,c=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            c+=(a.size()-i);
            j++;
        }
        else i++;
    }
    return c;
}
int mergeSort(vector<int>& v){
    int count=0;
    int n=v.size();
    if(n==1) return 0;
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
    count+=mergeSort(a);
    count+=mergeSort(b);
    count+=inversion(a,b);
    merge(a,b,v);
    a.clear();
    b.clear();
    return count;
}
int main(){
    //int arr[]={5,1,8,2,3};
    int arr[]={4,7,1,8,3,9,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    cout<<mergeSort(v);
}