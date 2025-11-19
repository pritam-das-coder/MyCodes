// Take input marks of a student and
// print the Grade according to marks:

// 1) 91-100 Excellent
// 2) 81-90 Very Good
// 3) 71-80 Good
// 4) 61-70 Can do better
// 5) 51-60 Average
// 6) 40-50 Below Average
// 7) <40 Fail

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the marks : ";
    cin>>m;
    if(m>=91)
    cout<<"Excellent";
    else if(m>=81)
    cout<<"Very Good";
    else if(m>=71)
    cout<<"Good";
    else if(m>=61)
    cout<<"Can do better";
    else if(m>=51)
    cout<<"Average";
    else if(m>=40)
    cout<<"Below Average";
    else
    cout<<"Fail";

}