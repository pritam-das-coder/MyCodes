// Take positive integer input and tell if it is a three digit number or not.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a positive integer : ";
    int n;
    cin>>n;
    if(n>=100 && n<=999){
        cout<<n<<" is a three digit number";
    }
    else{
        cout<<n<<" is not a three digit number";
    }
}