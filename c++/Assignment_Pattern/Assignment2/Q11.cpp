#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
    int nst=n-1,nsp=1;
    for(int i=1;i<=2*n-3;i++){
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        if(i<n-1){
            nst--;
            nsp+=2;
        }
        else{
            nst++;
            nsp-=2;
        }
        cout<<endl;
    }
    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
}