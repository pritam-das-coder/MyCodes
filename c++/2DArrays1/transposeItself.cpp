#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows of square matrix : ";
    cin>>n;
    int arr[n][n];
    // input
    cout<<"Enter all elements : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    // transpose
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         swap(arr[i][j],arr[j][i]);
    //     }
    // }
    // output
    cout<<"Transpose Matrix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}