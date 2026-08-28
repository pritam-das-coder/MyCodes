#include <iostream>
using namespace std;

class Parent1{
    public:
    void show(){
        cout<<"Hello from Parent1"<<endl;
    }
};

class Parent2{
    public:
    void show(){
        cout<<"Hello from Parent2"<<endl;
    }
};

class Child : public Parent1, public Parent2{
    public:
        void view(){
            Parent1::show();
        }
};

int main(){
    Child c;
    c.view();
}