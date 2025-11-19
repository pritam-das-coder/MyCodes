//  Find a to the power b to the power c
#include <iostream>
using namespace std;
long long pow(long long a,long long b){
    if(b==0) return 1;
    return a*pow(a,b-1);
}
int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    
    long long x=pow(b,c);
    cout<<pow(a,x);
    
}
// long long  binpow(long long  a, long long  b, long long  m) {
//     long long  ans = 1;
//     while (b)
//     {
//     if (b & 1)
//     ans = (ans * a) % m;
//     b /= 2;
//     a = (a * a) % m;
//     }
//     return ans;
// }
 
 
// int main() {
//     long long  a, b, c;
//     cin >> a >> b >> c;
//     const long long  M = 1e9 + 7;
//     cout << binpow(a, binpow(b, c, M), M);
// }