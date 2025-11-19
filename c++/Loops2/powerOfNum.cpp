// Two numbers are entered through the keyboard. Write a program to find the value of one
// number raised to the power of another.
#include<iostream>
using namespace std;
int main(){
    int a,b,product=1;
    cout<<"Enter base : ";
    cin>>a;
    cout<<"Enter exponent : ";
    cin>>b;
    bool flag=true;// b is +ve
    if(b<0){
        b=-b;
        flag=false;// b is -ve
    }
    for(int i=1;i<=b;i++){
        product*=a;
    }
    if(a==0 && b==0)
    cout<<"UNDEFINED!!";
    else if(flag==true)
    cout<<a<<" raised to the power "<<b<<" is "<<product;
    else
    cout<<a<<" raised to the power "<<-b<<" is "<<(1.0/product);
}