#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no. of rows : ";
    cin>>n;
    cout<<"Enter no. of cols : ";
    cin>>m;
    cout<<"Enter elements of matrix : "<<endl;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int l1,r1,l2,r2; // l->row r->col
    cout<<"Enter row and col of 1st coordinate : ";
    cin>>l1>>r1;
    cout<<"Enter row and col of 2nd coordinate : ";
    cin>>l2>>r2;
    int lmin=min(l1,l2);
    int lmax=max(l1,l2);
    int rmin=min(r1,r2);
    int rmax=max(r1,r2);
    int s=0;
    for(int i=lmin;i<=lmax;i++){
        for(int j=rmin;j<=rmax;j++){
            s+=arr[i][j];
        }
    }
    cout<<s;
}