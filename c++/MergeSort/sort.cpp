#include <iostream>
#include <vector>
using namespace std;
void inputVector(vector<int>& a){
    int n;
    cout<<"Enter size of arr : ";
    cin>>n;
    cout<<"Enter elements of arr : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
}
void merge(vector<int>& a,vector<int>& b,vector<int>& c){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<a.size()){
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<b.size()){
        c[k]=b[j];
        k++;
        j++;
    }
}
void mergeSort(vector<int>& v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2;
    int n2=n-(n/2);
    vector<int> v1(n1);
    vector<int> v2(n2);
    int i=0;
    while(i<n1){
        v1[i]=v[i];
        i++;
    }
    int j=0;
    while(i<n){
        v2[j]=v[i];
        i++,j++;
    }
    mergeSort(v1);
    mergeSort(v2);
    merge(v1,v2,v);
}
int main(){
    int arr[]={3,4,1,6,0,17,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    mergeSort(v);
    for(int i=0;i<n;i++) cout<<v[i]<<" "; 
}