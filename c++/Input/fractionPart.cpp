// Take float input and print the fractional part of the real number.
#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter a real number : ";
    cin>>x;// x=-1.3
    int y;
    y=(int)x;
    if(x<0)
    y=y -1;//y=-2
    cout<<"Fractional part : "<<(x-y);//0.7
}