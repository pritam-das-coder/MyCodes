#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int lcm(int a,int b,int c){
    int lcm;
    for(int i=a*b*c;i>=max(max(a,b),c);i--){
        if(i%a==0 && i%b==0 && i%c==0) lcm=i;
    }
    return lcm;
}
int main(){
    cout<<lcm(10,9,8);
}