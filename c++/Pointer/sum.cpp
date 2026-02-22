#include <iostream>
using namespace std;
int main(){
    int x,y;
    int* p1=&x;
    int* p2=&y;
    cout<<"Enter 2 no.s : ";
    cin>>*p1>>*p2; // user input through pointer
    int z;
    z=*p1 + *p2;
    cout<<z;
}