// Find the second largest element in the given Array.
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter all elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=arr[0],sl=arr[0];
    for(int i=1;i<n;i++){
        if(l<arr[i]){
            sl=l;
            l=arr[i];
        }
        if(arr[i]>sl && arr[i]<l) sl=arr[i];
    }
    cout<<sl;
}