//Take positive integer input and tell if it is divisible by 5 and 3.
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a positive integer : ";
    int n;
    cin>>n;
    if(n%5==0){
        if(n%3==0){
            cout<<n<<" is divisible by 5 and 3";
        }
        else{
            cout<<n<<" is divisible by 5 but not by 3";
        }
    }
    else{
        cout<<n<<" is not divisible by 5";
    }
}