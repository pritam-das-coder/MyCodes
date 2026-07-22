#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    // (n%2==0) ? cout<<"Even" : cout<<"Odd" ;
    char out=(n%2==0)?'e':'o';
    cout<<out;
}