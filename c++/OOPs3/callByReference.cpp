#include <iostream>
using namespace std;
class Student{
public:
    string name;
    int rollNumber;
    int age;
    Student(string name,int rollNumber,int age){
        this->name=name;
        this->rollNumber=rollNumber;
        this->age=age;
    }
};
// void change(Student &s){
//     s.age=45;
// }
void change(Student* s){
    s->age=76;
}
int main(){
    Student* s=new Student("Pritam",48,19);
    
    change(s);
    cout<<s->age<<endl;
}