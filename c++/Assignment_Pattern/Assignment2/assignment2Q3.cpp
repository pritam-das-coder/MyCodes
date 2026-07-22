// Print the following pattern
// Input : n = 4
// Output :
//    A
//   BAB
//  CBABC
// DCBABCD

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines : ";
    cin>>n;
    int nsp=n-1,nst=1;
    for(int i=1;i<=n;i++){
        int a=i;
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        for(int k=1;k<=nst;k++){
            cout<<(char)(a+64);
            if(k<=(nst/2)) a--;
            else a++;
        }
        nsp--;
        nst+=2;
        cout<<endl;
    }
    return 0;
}