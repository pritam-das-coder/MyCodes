#include <iostream>
using namespace std;
int powerOf2(int x){
    int res=0;
    while(x!=0){
        res=x;
        x = x & (x-1);
    }
    return res;
}
int powerOf2New(int n){
    n = n | (n>>1);
    n = n | (n>>2);
    n = n | (n>>4);
    n = n | (n>>8);
    n = n | (n>>16);
    // n = n | (n>>32);
    int res = (n+1)/2;
    return res; 
}
int main(){
    cout<<powerOf2New(126);
}