#include <iostream>
using namespace std;
int noOfWays(int n){
    if(n<=2) return n;
    if(n==3) return 4;
    return noOfWays(n-1)+noOfWays(n-2)+noOfWays(n-3);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<noOfWays(n);
}