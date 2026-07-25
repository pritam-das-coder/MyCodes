// Display this AP - 1,3,5,7,9.. upto ‘n’terms.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of terms : ";
    int n;
    cin>>n;
    // using formula
    // for(int i=1;i<=(2*n-1);i+=2){
    //     cout<<i;
    //     if(i!=(2*n-1))
    //     cout<<",";
    // }
    //using separate variable
    int a=100;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a=a-3;
    }
}