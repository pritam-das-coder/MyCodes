// Print sum from 1 to n (Parameterised)
#include <iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}
void sum2(int s,int n){
    if(n==0){
        cout<<s;
        return;
    }
    sum2(s+n,n-1);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    //cout<<sum(n);
    sum2(0,n);
}