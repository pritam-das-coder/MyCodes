// Write a program to add two matrices.
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter no. of rows : ";
    cin>>r;
    cout<<"Enter no. of columns : ";
    cin>>c;
    int a[r][c],b[r][c];
    cout<<"Enter all elements of matrix 1 : "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter all elements of matrix 2 : "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>b[i][j];
        }
    }
    // add
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         //res[i][j]=a[i][j]+b[i][j];
    //         cout<<a[i][j]+b[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         cout<<res[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            b[i][j]+=a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}