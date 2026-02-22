#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int rev=0;
    for(int i=x;i!=0;i/=10){
        int d=i%10;
        rev=rev*10+d;
        //cout<<rev<<endl;
    }
    cout<<rev;
}