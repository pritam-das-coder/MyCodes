#include <iostream>
using namespace std;

class Base{
    public:
        void show(){
            cout<<"Hello from Base"<<endl;
        }
};

class Parent1 : public Base{};

class Parent2 : public Base{};

class Child : public Parent1, public Parent2{
    public:
        void view(){
            Parent2::show();
        }
};

int main(){
    Child c;
    c.view();
}