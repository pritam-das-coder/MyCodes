#include <iostream>
using namespace std;
class A{
private:
    int a_private;
    void help(){
        cout<<"Help me"<<endl;
    }
    friend void show(A &a);
    friend class B;
};
void show(A &a){
    a.a_private=20;
    a.help();
    cout<<a.a_private<<endl;
}
class B{
public:
    void show(A &a){
        a.help();
        a.a_private=3;
        cout<<a.a_private<<endl;
    }
};
int main(){
    const int x=5;
    A a;
    // show(a);
    B b;
    b.show(a);
}