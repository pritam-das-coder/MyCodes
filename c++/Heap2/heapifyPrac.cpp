#include <iostream>
#include <climits>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
void heapify(int arr[],int n){
    for(int i=n/2;i>=1;i--){
        // pop's rearragement
        while(true){
            int l=2*i,r=2*i+1;
            if(l>=n) break;
            else if(r>=n){
                if(arr[i]>arr[l]) swap(arr[l],arr[i]);
                break;
            }
            else if(arr[i]>min(arr[l],arr[r])){
                if(arr[l]<arr[r]){
                    swap(arr[l],arr[i]);
                    i=l;
                }
                else{
                    swap(arr[r],arr[i]);
                    i=r;
                }
            }
            else break;
        }
    }
}
int main(){
    int arr[]={INT_MIN,10,1,2,20,5,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Heapify : "<<endl;
    print(arr,n);
    heapify(arr,n);
    cout<<"After Heapify : "<<endl;
    print(arr,n);
}