//  Given an integer n, find the minimum number to be added to change it to a power of two. (Try using bit 
// operations to solve)
# include <iostream>
using namespace std;
int fun(int n){
    if(n==0) return 1;
    int temp,k=0,x=n;
    while(n!=0){
        k++;
        temp = n;
        n = n & (n-1);
    }
    if(k==1) return 0;
    else return (temp*2 - x);
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<fun(n);
}