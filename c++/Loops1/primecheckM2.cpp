// WAP to check if a number is prime or not.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    bool flag=true;// true mean n is prime
    for(int i=2;i<=(n-1);i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
    if(n==1)
    cout<<n<<" is neither prime nor composite";
    else if(flag==true)
    cout<<n<<" is a prime number";
    else
    cout<<n<<" is a composite number";
}