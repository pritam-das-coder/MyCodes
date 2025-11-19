#include <iostream>
#include <cmath>
using namespace std;
void fun(int n,int* p1,int* p2){
    int d=0;
    for(int i=n;i!=0;i/=10){
        d=i%10;
    }
    *p1=d;
    *p2=n%10;
}
int main(){
    cout<<"Enter a no. : ";
    int n;
    cin>>n;
    int firstDigit,lastDigit;
    int *p1=&firstDigit,*p2=&lastDigit;
    fun(n,p1,p2);
    cout<<"First Digit : "<<firstDigit<<endl;
    cout<<"Last Digit : "<<lastDigit<<endl;
}