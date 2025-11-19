#include <iostream>
using namespace std;
void sum(int s,int n){
    if(n==0){
        cout<<s;
        return;
    }
    sum(s+n,n-1);
}
int sum2(int n){
    if(n==0) return 0;
    return n+sum2(n-1);
}
int main(){
    int n;
    cin>>n;
    //sum(0,n);
    cout<<sum2(n);
}