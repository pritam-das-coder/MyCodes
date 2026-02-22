#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines : ";
    cin>>n;
    int nsp=n-1,nst=1,c;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        nsp--;
        c=1;
        for(int k=1;k<=nst;k++){
            cout<<c;
            if(k<((nst+1)/2)) c++;
            else c--;
        }
        nst+=2;
        cout<<endl;
    }
    return 0;
}