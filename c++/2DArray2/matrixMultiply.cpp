#include <iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"Enter no. of rows of matrix 1 : ";
    cin>>r1;
    cout<<"Enter no. of columns of matrix 1 : ";
    cin>>c1;
    cout<<"Enter no. of rows of matrix 2 : ";
    cin>>r2;
    cout<<"Enter no. of columns of matrix 2 : ";
    cin>>c2;
    if(c1!=r2){
        cout<<"Matrix multiplication not possible";
        return 0;
    }
    int a[r1][c1],b[r2][c2],res[r1][c2];
    cout<<"Enter elements of matrix 1 : "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements of matrix 2 : "<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }
    // matrix multiplication
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            res[i][j]=0;
            for(int k=0;k<c1;k++){
                res[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    // print
    cout<<"Resultant Matrix : "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}