#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int>& v,int start,int end){
    int idx=-1;
    int smallEle=0;
    int assumedPivot=(start+end)/2;
    for(int i=start;i<=end;i++){
        if(i==assumedPivot) continue;
        if(v[i]<v[assumedPivot]) smallEle++;
    }
    idx=start+smallEle;
    swap(v[assumedPivot],v[idx]);
    int i=start,j=end;
    while(i<idx && j>idx){
        if(v[i]>=v[idx] && v[j]<v[idx]){
            swap(v[i],v[j]);
            i++;
            j--;
        }
        if(v[i]<v[idx]) i++;
        if(v[j]>v[idx]) j--;
    }
    return idx;
}
void quickSort(vector<int>& v,int start,int end){
    if(start>=end) return;
    int pivot=partition(v,start,end);
    quickSort(v,start,pivot-1);
    quickSort(v,pivot+1,end);
}
int main(){
    //int arr[]={5,1,8,2,7,6,3,4,-8};
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    quickSort(v,0,n-1);
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
}