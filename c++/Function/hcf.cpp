#include <iostream>
using namespace std;
int findHCF(int a,int b){
    int f=1;
    for(int i=min(a,b);i>=1;i--){ // optimised
        if(a%i==0 && b%i==0){
            f=i;
            break;
        }
    }
    return f;
}
int main(){
    cout<<findHCF(12,4);
}