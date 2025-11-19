// #include <iostream>
// using namespace std;
// class Student{
// public:
//     int rollNumber;
//     int age;
    
// };
// int main(){
//     Student s1;
//     Student s2; //deep copy
//     s2=s1;
//     s1.rollNumber=101;
//     s1.age=20;
//     cout<<s2.rollNumber<<" "<<s2.age;
// }
#include<iostream>
using namespace std;
class book{
public:
    string name;
    string author;
    int callno;
    void display(){
        cout <<name <<" "<<author <<" "<<callno <<endl;
    }
};
int main(){
    book b1 = {"Let us C","YPK",101};
    b1.display();
    return 0;
}