//Take positive integer input and tell if it is divisible by 5 and 3.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a positive integer : ";
    int n;
    cin>>n;
    if(n%15 == 0){//n%5==0 && n%3==0
        cout<<"Divisible by 5 and 3";
    }
    else{
        cout<<"Not divisible by 5 and 3";
    }
}