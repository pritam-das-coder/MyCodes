#include <iostream>
using namespace std;
int main(){
    char x;
    char *p=&x;
    int size=sizeof(p);
    cout<<size;
}