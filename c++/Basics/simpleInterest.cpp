#include<iostream>
using namespace std;
int main(){
    float SI,p,r,t;
    // float P=1000,R=4.5,T=3.5;
    // SI=(P*R*T)/100;//Simple Interest
    // cout<<SI;
    cout<<"Enter the principal : ";
    cin>>p;
    cout<<"Enter the rate : ";
    cin>>r;
    cout<<"Enter the time : ";
    cin>>t;
    SI=(p*r*t)/100;
    cout<<"The simple interest is "<<SI;
}