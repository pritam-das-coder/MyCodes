#include <iostream>
#include <string>
using namespace std;
// void generate(string ans,int o,int c,int n){
//     if(o==n && c==n){
//         cout<<ans<<endl;
//         return;
//     }
//     if(o<c) return;
//     if(o<n)
//         generate(ans+"(",o+1,c,n);
//     if(c<n)
//         generate(ans+")",o,c+1,n);
// }
void generate(string ans,int o,int c,int n){ //optimised
    if(c==n){
        cout<<ans<<endl;
        return;
    }
    if(o<n)
        generate(ans+"(",o+1,c,n);
    if(o>c)
        generate(ans+")",o,c+1,n);
}
int main(){
    generate("",0,0,2);
}