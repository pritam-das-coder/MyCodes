#include <iostream>
using namespace std;
class A{
    public:
    int a_ka_public;
    A(){
        cout<<"Constructor of A is called"<<endl;
    }

};
class B : virtual public A{ 
    public:
    int b_ka_public;
    B(){
        cout<<"Constructor of B is called"<<endl;
    }
};
class C : virtual public A{ 
    public:
    int c_ka_public;
    C(){
        cout<<"Constructor of C is called"<<endl;
    }
};
class D : public B, public C{
    public:
    int d_ka_public;
    D(){
        cout<<"Constructor of D is called"<<endl;
    }
    void show(){
        cout<<a_ka_public<<endl;
    }
};
int main(){
    D d;
    d.a_ka_public=10;
    d.show();
}