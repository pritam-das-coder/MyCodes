// Find greatest integer of -ve or +ve real number
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a real number : ";
    float i;
    cin>>i;
    int j=(int)i;
    if(i<0){
        j--;
    }
    cout<<"The reqd. greatest integer : "<<j;

}