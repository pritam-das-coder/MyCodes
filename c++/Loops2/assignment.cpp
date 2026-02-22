#include<iostream>
using namespace std;
int main(){
    // cout<<"Enter a number : ";
    // int n,rev=0;
    // cin>>n;
    // for(int i=n;i>0;i/=10){
    //     int d=i%10;
    //     rev=rev*10+d;
    // }
    // cout<<(rev+n);
    int i=65;
    while(i<=90){
        cout<<i<<"->"<<(char)i<<endl;
        i++;
    }
    i=97;
    while(i<=122){
        cout<<i<<"->"<<(char)i<<endl;
        i++;
    }
}