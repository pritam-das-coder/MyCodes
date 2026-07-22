// Write a program to create a calculator that performs basic arithmetic operations (add,
// subtract, multiply and divide) using switch case and functions. The calculator should input two
// numbers and an operator from user.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter 1st number, operator and 2nd number respt. : ";
    int x,y;
    char ch;
    cin>>x>>ch>>y;
    // switch(ch){
    //     case '+' :
    //         cout<<x+y;
    //         break;
    //     case '-':
    //         cout<<x-y;
    //         break;
    //     case '*' :
    //         cout<<x*y;
    //         break;
    //     case '/':
    //         if(y==0){
    //             cout<<"Cannot divide with zero";
    //         }
    //         else{
    //             cout<<x/y;
    //         }
    //         break;
    //     default:
    //         cout<<"Not found";
    // }
    if(ch=='+') cout<<x+y;
    else if(ch=='-') cout<<x-y;
    else if(ch=='*') cout<<x*y;
    else if(ch=='/'){
        if(y==0)
            cout<<"Cannot divide with 0";
        else
            cout<<x/y; 
    } 
    else cout<<"Invalid";
}
