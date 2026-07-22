#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no. : ";
    cin>>n;
    for(int i=1;i<=(2*n+1);i++){
        for(int j=1;j<=(2*n-1);j++){
            int a=i,b=j;
            if(i>(n+1)) a=2*(n+1)-i;
            if(j>n) b=2*n-j;
            if(i==(n+1)||j==n||(a+b)==(n+1))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}