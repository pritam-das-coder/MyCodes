// Create a class to specify data on students with these attributes:
// Roll number, Name, Department, Course,
// Year of joining. Create
// 2 class variables. Now, create a member function to check if two
// students have the same Department.
#include <iostream>
using namespace std;
class Student{
public:
    int rno;
    string name;
    string dept;
    string course;
    int yr_join;
    Student(int rno,string name,string dept,string course,int yr_join){
        this->rno=rno;
        this->name=name;
        this->dept=dept;
        this->course=course;
        this->yr_join=yr_join;
    }
    void check(Student s){
        if(s.dept==dept) cout<<"Same Department"<<endl;
        else cout<<"Different Department"<<endl;
    }
};
int main(){
    Student s1(48,"Pritam","CSE","B.Tech",2024);
    Student s2(48,"Suman","ECE","B.Tech",2024);
    s1.check(s2);
}