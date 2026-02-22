// Write a program to print the transpose of the matrix entered by the user and store it in a new matrix.
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter no. of rows : ";
    cin>>r;
    cout<<"Enter no. of columns : ";
    cin>>c;
    int arr[r][c];
    cout<<"Enter all elements of matrix : "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    // print transpose
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    // transpose matrix create
    // int trans[c][r];
    // for(int i=0;i<c;i++){
    //     for(int j=0;j<r;j++){
    //         trans[i][j]=arr[j][i];
    //     }
    // }
    // cout<<"Transpose Matrix : "<<endl;
    // for(int i=0;i<c;i++){
    //     for(int j=0;j<r;j++){
    //         cout<<trans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}