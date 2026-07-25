#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int a=1,b=1,c=0;
    for(int i=1;i<=(n-2);i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout<<b;
}