// Given an integer n, flip all its bits i.e. if the given bit is 1, 
// change it to 0 and vice versa.
# include <iostream>
using namespace std;
int flip(int x){
    int y=x;
    int temp=0;
    while(x!=0){
        temp=x;
        x = x & (x-1);
    }
    temp=temp*2-1;
    return (y ^ temp);
}
int main(){
    cout<<flip(24);
}