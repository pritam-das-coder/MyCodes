#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines : ";
    cin>>n;
    int a=1;
    for(int i=1;i<=(2*n-1);i++){
        cout<<a;
        if(i<n) a++;
        else a--;
    }
    cout<<endl;
    int nst=n-1,nsp=1;
    for(int i=1;i<n;i++){
        for(int j=1;j<=nst;j++){
            cout<<j;
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";   
        }
        for(int m=nst;m>=1;m--){
            cout<<m;  
        }
        cout<<endl;
        nst--;
        nsp+=2;
    }
    return 0;
}