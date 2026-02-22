#include <iostream>
using namespace std;
int main(){
    double x;
    double* ptr=&x;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
}