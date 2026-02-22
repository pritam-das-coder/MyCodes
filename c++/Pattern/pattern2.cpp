#include <iostream>
using namespace std;
int main(){
    int n=4;
    int nsp=n-1,nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++)
            cout<<" ";
        for(int k=1;k<=nst;k++)
            cout<<(char)(k+64);
        nsp--;
        nst+=2;
        cout<<endl;
    }
    return 0;
}