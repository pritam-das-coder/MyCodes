// Find the number of set bits for any integer n.
# include <iostream>
using namespace std;
int numOfSetBits(int n){
    int count=0;
    while(n>0){
        if(n%2!=0) count++;
        n=n>>1;
    }
    return count;
}
int main(){
    cout<<numOfSetBits(64);
}