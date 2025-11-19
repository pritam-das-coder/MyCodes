#include<iostream>
using namespace std;
int main(){
    cout<<"Enter an integer : ";
    int n;
    cin>>n;
    if(n<0){
        n=-n;
    }
    cout<<"Absolute value : "<<n;
    return 0;
}