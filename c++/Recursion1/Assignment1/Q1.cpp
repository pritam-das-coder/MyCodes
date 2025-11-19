#include <iostream>
using namespace std;
int sum(int a,int b){
    if(a>b) return 0;
    if(b%2==0) return sum(a,b-1);
    else return b+sum(a,b-2);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b);
}