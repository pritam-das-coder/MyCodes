#include<iostream>
using namespace std;
int main(){
    int n,r=0;
    cout<<"Enter a number : ";
    cin>>n;
    // for(int i=n;i>0;i/=10){
    //     int d=i%10;
    //     r=r*10+d;
    // }
    int a=n;
    while(n>0){
        int d=n%10;
        r=r*10+d;
        n/=10;
    }
    cout<<"The reverse number is "<<r;
}