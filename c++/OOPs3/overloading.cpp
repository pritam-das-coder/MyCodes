#include <iostream>
using namespace std;
class Student{
    public:
    int roll;
    string name;
    Student(){
        roll=1;
        name="Pritam";
    }
    Student(int r,string n) : roll(r),name(n){}
    void display(){
        cout<<roll<<" "<<name<<endl;
    }
};
int add(int a,int b){
    return a+b;
}
int add(int a,int b,int c){
    return a+b+c;
}
int main(){
    // cout<<add(2,5)<<endl;
    // cout<<add(2,4,5)<<endl;
    Student st1;
    Student st2(45,"Suman");

    st1.display();
    st2.display();
}