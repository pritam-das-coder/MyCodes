#include <iostream>
using namespace std;
int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    int a;
    cout<<"Enter a : ";
    cin>>a;
    int b;
    cout<<"Enter b : ";
    cin>>b;
    // a^b
    if(a==0 && b==0){
        cout<<"Indeterminate form";
    }
    else if(b<0){
        float res=1.0/power(a,abs(b));
        cout<<res;
    }
    else
        cout<<power(a,b);
}