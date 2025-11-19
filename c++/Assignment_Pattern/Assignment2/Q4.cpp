#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines : ";
    cin>>n;
    for(int i=1;i<=(2*n-1);i++){
        cout<<(char)(i+64);
    }
    cout<<endl;
    int nst=n-1,nsp=1;
    for(int i=1;i<n;i++){
        int a=1;
        for(int j=1;j<=nst;j++){
            cout<<(char)(a+64);
            a++;
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
            a++;
        }
        for(int m=1;m<=nst;m++){
            cout<<(char)(a+64);
            a++;
        }
        cout<<endl;
        nst--;
        nsp+=2;
    }
    return 0;
}