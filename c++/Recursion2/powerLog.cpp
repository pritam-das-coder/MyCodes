#include <iostream>
using namespace std;
int power(int x,int n){
    if(n==0) return 1;
    if(n==1) return x;
    int p=power(x,n/2);
    if(n%2==0) return p*p;
    else return p*p*x;
}
int main(){
    int x;
    cout<<"Enter x : ";
    cin>>x;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<power(x,n);
}