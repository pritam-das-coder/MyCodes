#include <iostream>
using namespace std;
class A{
    public:
    int a_ka_public;
    protected:
    int a_ka_protected;
    private:
    int a_ka_private;

};
class B : public A{ // a_ka_public as public, a_ka_protected as protected
    public:
    int b_ka_public;
    void show(){
        a_ka_protected = 0;
        a_ka_public = 1;
    }
};
class C : public B{ // b_ka_public as public ,a_ka_public as public, a_ka_protected as protected 
    public:
    int c_ka_public;
    void show(){
        //b_ka_public
        //a_ka_protected
        // a_ka_public
    }
};
int main(){
    B b;
    b.a_ka_public=3;
    b.b_ka_public=2;
    C c;
    
}