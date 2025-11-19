#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int>& v,int start,int end){
    int pivotIdx=-1,assumedPivotIdx=(start+end)/2;
    int count=0;
    for(int i=start;i<=end;i++){
        if(i==assumedPivotIdx) continue;
        if(v[i]<=v[assumedPivotIdx]) count++;
    }
    pivotIdx=count+start;
    swap(v[pivotIdx],v[assumedPivotIdx]);
    int i=start,j=end;
    while(i<pivotIdx && j>pivotIdx){
        if(v[i]>v[pivotIdx] && v[j]<=v[pivotIdx]){
            swap(v[i],v[j]);
            i++;
            j--;
        }
        if(v[i]<=v[pivotIdx]) i++;
        if(v[j]>v[pivotIdx]) j--;
    }
    return pivotIdx;
}
int kthSmallest(vector<int>& v,int start,int end,int k){
    int pivotIdx=partition(v,start,end);
    if(pivotIdx+1==k){
        return v[pivotIdx];
    }
    else if(pivotIdx+1<k) return kthSmallest(v,pivotIdx+1,end,k);
    else return kthSmallest(v,start,pivotIdx-1,k);
}
int main(){
    int arr[]={2,5,1,9,12,45,39};// 1 2 5 9 12 39 45
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    int k=6;
    cout<<kthSmallest(v,0,n-1,k);
}