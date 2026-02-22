//Take 3 numbers input and tell if they can be the sides of a triangle.
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter 3 numbers :";
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && c+a>b){
        cout<<"Triangle can be formed";
    }
    else{
        cout<<"Triangle cannot be formed";
    }
}