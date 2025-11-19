#include <iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"Constructor of A is called"<<endl;
    }

};
class B : public A{ 
    public:
    B(){
        cout<<"Constructor of B is called"<<endl;
    }
};
class C : public A{ 
    public:
    C(){
        cout<<"Constructor of C is called"<<endl;
    }
};
int main(){
    C c;
    B b;
}