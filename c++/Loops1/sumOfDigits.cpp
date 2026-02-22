// WAP to print sum of digits of a given number.
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=n;i>0;i/=10){
        int d=i%10;
        sum+=d;
    }
    // while(n>0){
    //     sum+=n%10;
    //     n/=10;
    // }
    cout<<sum;
}