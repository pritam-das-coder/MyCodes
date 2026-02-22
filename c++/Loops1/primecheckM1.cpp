#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n,c=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0)
            c++;
    }
    if(c==1)
        cout<<n<<" is neither prime nor composite number";
    else if(c==2)
        cout<<n<<" is prime number";
    else
        cout<<n<<" is composite number";
}