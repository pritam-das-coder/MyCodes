#include <iostream>
using namespace std;
class A{
    public:
    int a_ka_public;
    A(){
        cout<<"Constructor of A is called"<<endl;
    }
    virtual void show(){
        cout<<"It's show of A"<<endl;
    }

};
class B : public A{ 
    public:
    int b_ka_public;
    B(){
        cout<<"Constructor of B is called"<<endl;
    }
    void show(){
        cout<<"It's show of B"<<endl;
    }
};
int main(){
    A *a;
    B b;
    a=&b;
    a->show(); // It's show of B
    cout<<sizeof(b)<<endl;
    A a2;
    cout<<sizeof(a2)<<endl;
}