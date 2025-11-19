#include <iostream>
using namespace std;
int count_set_bits(int n){
    return __builtin_popcount(n);
}
int count_set_bits2(int x){
    int count=0;
    while(x!=0){
        x = x & (x-1);
        count++;
    }
    return count;
}
int main(){
    cout<<count_set_bits(256)<<endl;
    cout<<count_set_bits2(256);
}