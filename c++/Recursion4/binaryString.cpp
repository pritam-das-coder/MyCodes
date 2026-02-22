// Generate all binary strings of length n without consecutive 1’s
#include <iostream>
using namespace std;
int n=2;// global variable
void generate(string s){
    if(s.length()==n){
        cout<<s<<endl;
        return;
    }
    generate(s+"0");
    if(s.length()==0 || s[s.length()-1]=='0')
        generate(s+"1");
}
int main(){
    //n=3;
    generate("");
}