#include <iostream>
using namespace std;
void fun(int x=8,float y=5.3){
    cout<<x<<" "<<y;
}
int main(){
    fun(4.7,5.7);
}