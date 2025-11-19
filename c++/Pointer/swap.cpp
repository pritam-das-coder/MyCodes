#include <iostream>
using namespace std;
void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int x,y;
    cout<<"Enter 2 no.s : "<<endl;
    cin>>x>>y;
    swap(&x,&y);
    cout<<x<<" "<<y;
}