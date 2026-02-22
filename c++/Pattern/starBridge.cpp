#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of lines : ";
    cin>>n;
    for(int i=1;i<=(2*n-1);i++){
        cout<<"*";
    }
    cout<<endl;
    int nst=n-1,nsp=1;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        for(int m=1;m<=nst;m++){
            cout<<"*";
        }
        cout<<endl;
        nst--;
        nsp+=2;
    }
    return 0;
}