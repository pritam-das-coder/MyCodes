// Find the element x in the array . Take array and x as input.
#include <iostream>
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
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag=true;
            cout<<"Element found at index "<<i<<endl;
        }
    }
    if(flag==false){
        cout<<"Element not found";
    }
}