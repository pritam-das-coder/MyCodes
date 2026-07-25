// Count the number of elements in given array greater than a given number x.
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
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]>x) c++;
    }
    if(c==0) cout<<"No such element found";
    else cout<<c;
}