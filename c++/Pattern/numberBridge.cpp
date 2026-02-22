#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines : ";
    cin>>n;
    for(int i=1;i<=(2*n-1);i++){
        cout<<i;
    }
    cout<<endl;
    int nnum=n-1,nsp=1;
    for(int i=1;i<=n-1;i++){
        int num=1;
        for(int j=1;j<=nnum;j++){
            cout<<num;
            num++;
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
            num++;
        }
        for(int j=1;j<=nnum;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
        nsp+=2;
        nnum--;
    }
    return 0;
}