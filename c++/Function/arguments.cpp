#include <iostream>
using namespace std;
void f(int x,int y){
    cout<<&x<<" "<<&y<<endl;
    cout<<x<<" "<<y;
}
int main(){
    int x,y;
    cout<<&x<<" "<<&y<<endl;
    f(x,y);
}