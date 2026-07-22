//Write a program to input month number and print total number of days in month using switch case.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter month number : ";
    int n;
    cin>>n;
    switch((n%2!=0 && n<=7) ||(n>=8 && n%2==0 && n<=12)){// condition
        case 1:
            cout<<31;
    }
    switch(n==4 || n==6 || n==9 || n==11){// condition
        case 1:
        cout<<30;
    }
    switch(n){// integer expression
        case 2:
        cout<<28;
    }
}