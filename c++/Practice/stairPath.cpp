#include <iostream>
using namespace std;
void ways(int n,string s){
    if(n==1){
        cout<<s+"1"<<endl;
        return;
    }
    if(n==2){
        cout<<s+"11"<<endl;
        cout<<s+"2"<<endl;
        return;
    }
    ways(n-1,s+"1");
    ways(n-2,s+"2");
}
int main(){
    int n;
    cin>>n;
    ways(n,"");
}