// Create a class ‘Employee’ with following data members :
//  Name
//  Employee ID
//  Salary
// Class should have following member functions:
// Display() : To display the characteristics of each employee
// Create 5 objects of Employee and write functions to calculate
//  averageWage() : To return the average salary of all employees
//  maxSalary() : To return the employee whose salary is maximum
#include <iostream>
#include <vector>
using namespace std;
class Employee{
public:
    string name;
    int employee_id;
    int salary;
    Employee(){

    }
    Employee(string name,int employee_id,int salary){
        this->name=name;
        this->employee_id=employee_id;
        this->salary=salary;
    }
    void display(){
        cout<<"Name : "<<name<<endl<<"Employee ID : "<<employee_id<<endl<<"Salary : "<<salary<<endl;
    }
};
float averageWage(vector<Employee> &e){
    float sum=0;
    for(int i=0;i<e.size();i++){
        sum = sum + e[i].salary;
    }
    return (sum/e.size());
}
Employee maxSalary(vector<Employee> &e){
    Employee x;
    int max_salary=-1;
    for(int i=0;i<e.size();i++){
        if(max_salary<e[i].salary){
            max_salary=e[i].salary;
            x=e[i];
        }
    }
    return x;
}
int main(){
    Employee e1("Pritam",123,34000),e2("Raghav",342,56000),e3("Harsh",456,59000),e4("Suman",500,26000),e5("Sanket",145,76000);
    Employee arr[]={e1,e2,e3,e4,e5};
    int n=5;
    vector<Employee> e(arr,arr+n);
    cout<<averageWage(e)<<endl;
    maxSalary(e).display();
}