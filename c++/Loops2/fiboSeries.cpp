#include<iostream>
using namespace std;
int main(){
    cout<<"Enter number of terms : ";
    int n,a=1,b=1,c=0;
    cin>>n;
    cout<<"1 1";
    for(int i=1;i<=(n-2);i++){
        c=a+b;
        cout<<" "<<c;
        a=b;
        b=c;
    }
}
