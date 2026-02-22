//Take 3 positive integers input and print the greatest of them.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter 3 positive integers : ";
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a<<" is greatest";
    }
    if(b>a && b>c){
        cout<<b<<" is greatest";
    }
    if(c>a && c>b){
        cout<<c<<" is greatest";
    }
}