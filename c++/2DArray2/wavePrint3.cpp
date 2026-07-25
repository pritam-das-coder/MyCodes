#include <iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter no. of rows of matrix : ";
    cin>>r;
    cout<<"Enter no. of columns of matrix : ";
    cin>>c;
    int a[r][c];
    cout<<"Enter elements of matrix : "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Wave Print : "<<endl;
    for(int j=0;j<c;j++){
        if(j%2==0){
            for(int i=0;i<r;i++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int i=r-1;i>=0;i--){
                cout<<a[i][j]<<" ";
            }
        }
    }
}