#include <iostream>
using namespace std;
class Bike{
    public:
    int *tyreSize;
    int engineSize;
    string name;

    Bike(int tyreSize, int engineSize, string name){
        this->tyreSize = new int(tyreSize);
        this->engineSize = engineSize;
        this->name = name;
        cout<<"Constructor is called for "<<name<<endl;
    }

    ~Bike(){
        delete tyreSize;
        cout<<"Destructor is called for "<<name<<endl;
    }
    
    
};
int main(){
    Bike tvs(100,150,"tvs");
    
    
    // bool flag = true;
    // if(flag){
    //     Bike mercedes(150,200,"mercedes");
    // }
    
    Bike maruti(80,130,"maruti");
    
    

}