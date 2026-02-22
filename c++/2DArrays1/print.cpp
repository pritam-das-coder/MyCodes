#include <iostream>
using namespace std;
int main(){
    //int arr[2][3]={1,2,3,4,5,6};
    int r,c;
    cout<<"Enter no. of rows : ";
    cin>>r;
    cout<<"Enter no. of columns : ";
    cin>>c;
    int arr[r][c];
    // input
    cout<<"Enter all elements : ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    // output
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}