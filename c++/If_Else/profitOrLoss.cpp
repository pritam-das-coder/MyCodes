#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the cost price & selling price respt. : ";
    float CP,SP;
    cin>>CP>>SP;
    if(CP>SP){
        cout<<"Loss occured"<<endl<<"Loss = "<<(CP-SP);
    }
    if(CP<SP){
        cout<<"Profit occured"<<endl<<"Profit = "<<(SP-CP);
    }
    if(CP==SP){
        cout<<"No profit No loss";
    }
}
