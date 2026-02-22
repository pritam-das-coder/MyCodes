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
    for(int i=r-1;i>=0;i--){
        if(i%2==0){
            for(int j=0;j<c;j++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int j=c-1;j>=0;j--){
                cout<<a[i][j]<<" ";
            }
        }
    }
}