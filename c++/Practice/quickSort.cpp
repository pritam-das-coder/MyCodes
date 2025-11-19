#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int>& v,int start,int end){
    int count=0,idx=-1;
    for(int i=start+1;i<=end;i++){
        if(v[i]<=v[start]) count++;
    }
    idx=count+start;
    swap(v[start],v[idx]);
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
void quickSort(vector<int>& v,int start,int end){
    if(start>=end) return;
    int pivotIdx=partition(v,start,end);
    quickSort(v,start,pivotIdx-1);
    quickSort(v,pivotIdx+1,end);
}
int main(){
    int arr[]={4,7,1,8,3,9,1};
    //int arr[]={5,1,8,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    quickSort(v,0,n-1);
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
}