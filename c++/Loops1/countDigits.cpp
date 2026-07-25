// WAP to count digits of a given number.
#include<iostream>
using namespace std;
int main(){
    int n,c=0;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=n;i>0;i/=10){
        //int d=i%10;
        c++;
    }
    if(n==0) cout<<"The number of digits of "<<n<<" is 1";
    else cout<<"The number of digits of "<<n<<" is "<<c;
    // int a=n;
    // while(n>0){
    //     c++;
    //     n/=10;
    // }
    // if(a==0) cout<<"1";
    // else cout<<c;
    //cout<<"The number of digits of "<<a<<" is "<<c;

}