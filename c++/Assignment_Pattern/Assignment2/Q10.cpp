#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int nst=1,nsp=2*n-3;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        for(int s=1;s<=nsp;s++){
            cout<<" ";
        }
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        nst++;
        nsp-=2;
        cout<<endl;
    }
    for(int i=1;i<=2;i++){
        for(int j=1;j<=2*n-1;j++)
            cout<<"*";
        cout<<endl;
    }
    nst=n-1,nsp=1;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        for(int s=1;s<=nsp;s++){
            cout<<" ";
        }
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        nst--;
        nsp+=2;
        cout<<endl;
    }
}