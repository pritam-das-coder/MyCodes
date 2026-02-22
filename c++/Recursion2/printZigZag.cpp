#include <iostream>
using namespace std;
void zigzag(int n){
    if(n==0) return;
    cout<<n; // kaam
    zigzag(n-1); // call
    cout<<n; // kaam
    zigzag(n-1);// call
    cout<<n;// kaam
}
int main(){
    int n;
    cin>>n;
    zigzag(n);
}