#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    // int f=1;
    // for(int i=1;i<=n;i++){
    //     f*=i;
    // }
    // cout<<f;
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
        cout<<i<<"! = "<<f<<endl;
    }
    if(n==0) cout<<"0! = 1";
}