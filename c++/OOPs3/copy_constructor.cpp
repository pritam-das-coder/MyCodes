#include <iostream>
using namespace std;
class Bike{
    public:
    int tyreSize;
    int engineSize;
    string name;

    Bike(int tyreSize, int engineSize, string name){
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
        this->name = name;
    }
    // copy constructor
    Bike(Bike &b){
        tyreSize = b.tyreSize;
        engineSize = b.engineSize;
        name = b.name;
    }

    void display(){
        cout<<tyreSize<<" "<<engineSize<<" "<<name<<endl;
    }

};
int main(){
    Bike tvs(100,150,"tvs");
    Bike maruti(80,130,"maruti");
    Bike maruti2(maruti);
    // Bike maruti2 = maruti;
    maruti2.tyreSize = 100;

    tvs.display();
    maruti.display();
    maruti2.display();
}