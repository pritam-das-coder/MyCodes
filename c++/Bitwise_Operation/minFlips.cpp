// Calculate the minimum number of bit flips to convert from 
// one number to another. 
#include <iostream>
using namespace std;
int main(){
    int x=45;
    int y=27;
    int res=__builtin_popcount(x^y);
    cout<<res;
}