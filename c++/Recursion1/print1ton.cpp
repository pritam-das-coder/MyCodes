#include <iostream>
using namespace std;
void print(int n,int s){
    if(s>n) return; // base case
    cout<<s<<endl;
    print(n,s+1); // call
}
void print2(int n){
    if(n==0) return;
    print2(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    //print(n,1);
    print2(n);
}