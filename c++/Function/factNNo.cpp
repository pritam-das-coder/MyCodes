#include <iostream>
using namespace std;
int fact(int a){
    int f=1;
    for(int i=1;i<=a;i++){
        f*=i;
    }
    return f;
}
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
        cout<<f<<endl;
        //cout<<i<<"! = "<<fact(i)<<endl;
    }
}