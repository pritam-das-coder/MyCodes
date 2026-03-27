#include <iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int idx=si+(ei-si)/2;
    int c=0;
    for(int i=si;i<=ei;i++){
        if(i==idx) continue;
        if(arr[i]<=arr[idx]) c++;
    }
    int pI=si+c;
    swap(arr[pI],arr[idx]);
    int i=si,j=ei;
    while(i<j){
        if(arr[i]>arr[pI] && arr[j]<=arr[pI]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        } 
        if(arr[i]<=arr[pI]) i++;
        if(arr[j]>arr[pI]) j--;
    }
    return pI;
}
int quickSelect(int arr[],int si,int ei,int k){
    int pI=partition(arr,si,ei);
    if(k-1==pI) return arr[pI];
    else if(k-1<pI) return quickSelect(arr,si,pI-1,k);
    else return quickSelect(arr,pI+1,ei,k);
}
int main(){
    int arr[]={3,0,1,5,54,21,5,44,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=6;
    cout<<quickSelect(arr,0,n-1,k)<<" ";

}