#include <iostream>
using namespace std;
class Bike{
    public:
    int tyreSize;
    int engineSize;
    string name;

    Bike(int tyreSize = 0, int engineSize = 0, string name = "x"){
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
        this->name = name;
        cout<<"Constructor is called for "<<name<<endl;
    }

    ~Bike(){
        cout<<"Destructor is called for "<<name<<endl;
    }
    
    
};
int main(){
    Bike tvs(100,150,"tvs");
    
    // cout<<tvs.tyreSize<<endl;
    // cout<<tvs.engineSize<<endl;
    // Bike maruti = tvs; //  deep copy
    bool flag = true;
    if(flag){
        Bike mercedes(150,200,"mercedes");
    }
    
    Bike maruti(80,130,"maruti");
    
    //maruti = tvs;
    // cout<<&maruti<<endl;
    // cout<<&tvs<<endl;
    // maruti.engineSize = 300;
    // maruti.tyreSize = 250;

    // cout<<tvs.tyreSize<<endl;
    // cout<<tvs.engineSize<<endl;
    // cout<<maruti.tyreSize<<endl;
    // cout<<maruti.engineSize<<endl;

}