#include <iostream>
using namespace std;
class Vehicle{ // abstract class
public:
    int tyreSize;
    virtual void calculateMileage() = 0; // pure virtual function
    virtual void refuel() = 0;
    void hello(){
        cout<<"Hello from Vehicle"<<endl;
    }
};
class Bike:public Vehicle{
public:
    void calculateMileage(){
        cout<<"Mileage calculated"<<endl;
    }
    void refuel(){
        cout<<"Bike refuel done"<<endl;
    }
};
int main(){
    Bike b;
    b.calculateMileage();
    b.refuel();
    b.hello();
    // Vehicle v;
}