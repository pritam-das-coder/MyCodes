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
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i])
            max=arr[i];
    }
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=max && arr[i]>smax) smax=arr[i];
    }
    cout<<smax;
}