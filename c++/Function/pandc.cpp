#include <iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int comb(int n,int r){
    int c=fact(n)/(fact(n-r)*fact(r));
    return c;
}
int perm(int n,int r){
    int p=fact(n)/fact(n-r);
    return p;
}
int main(){
    int n,r;
    cout<<"Enter n & r : ";
    cin>>n>>r;
    cout<<comb(n,r)<<" "<<perm(n,r);
}