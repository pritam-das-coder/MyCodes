#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines : ";
    cin>>n;
    // for(int i=n;i>=1;i--){
    //     for(int j=1;j<=i;j++)
    //         cout<<"*";
    //     cout<<endl;
    // }
    // int c=n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=c;j++)
    //         cout<<"*";
    //     c--;
    //     cout<<endl;
    // }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n+1-i);j++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}