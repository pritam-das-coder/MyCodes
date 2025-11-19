// Given an integer array where every element occurs twice 
// except one occurs only once. Find that unique element.
#include <iostream>
using namespace std;
int findUnique(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        res=res^arr[i];
    }
    return res;
}
int main(){
    int arr[]={2,1,3,2,1,5,6,6,5};
    cout<<findUnique(arr,9);
}