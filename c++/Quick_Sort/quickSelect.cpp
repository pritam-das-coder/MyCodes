#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int>& v,int start,int end){
    int count=0,idx=-1;
    for(int i=start;i<=end;i++){
        if(i==(start+end)/2) continue;
        if(v[i]<=v[(start+end)/2]) count++;
    }
    idx=count+start;
    swap(v[(start+end)/2],v[idx]);
    int i=start,j=end;
    while(i<idx && j>idx){
        if(v[i]<=v[idx]) i++;
        if(v[j]>v[idx]) j--;
        if(v[i]>v[idx] && v[j]<=v[idx]){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    return idx;
}
int quickSort(vector<int>& v,int start,int end,int k){
    int pivotIdx=partition(v,start,end);
    if(pivotIdx+1==k){
        return v[pivotIdx];
    }
    else if(pivotIdx+1<k) return quickSort(v,pivotIdx+1,end,k);
    else return quickSort(v,start,pivotIdx-1,k);
}
int main(){
    int arr[]={4,7,1,8,3,9,1};// 1 1 3 4 7 8 9
    int k=2;
    //int arr[]={5,1,8,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    cout<<quickSort(v,0,n-1,k);
    //for(int i=0;i<n;i++) cout<<v[i]<<" ";
}