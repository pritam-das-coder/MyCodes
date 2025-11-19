#include <iostream>
#include <vector>
using namespace std;
void print(string s,int n){
    if(s.length()==n){
        cout<<s<<endl;
        return;
    }
    print(s+"0",n);
    if(s.length()==0 || s[s.length()-1]=='0')
        print(s+"1",n);
}
int main(){
    print("",2);
}