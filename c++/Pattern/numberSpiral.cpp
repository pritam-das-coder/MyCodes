#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int nst=2*n-1,nh=0,a=n; // a->stars, b->hashes
    for(int i=1;i<=(2*n-1);i++){
        int b=n;
        for(int j=1;j<=nh;j++){
            cout<<b;
            b--;
        }
        b++;
        for(int k=1;k<=nst;k++){
            cout<<a;
        }
        for(int j=1;j<=nh;j++){
            cout<<b;
            b++;
        }
        cout<<endl;
        if(i<=(n-1)){
            nst-=2;
            nh++;
            a--;
        }
        else{
            nst+=2;
            nh--;
            a++;
        }
    }
    return 0;
}