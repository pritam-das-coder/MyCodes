#include <iostream>
using namespace std;
class Bike{
    public:
    static int noOfBikes;
    int tyreSize;
    int engineSize;
    string name;

    Bike(int tyreSize, int engineSize, string name){
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
        this->name = name;
    }
    static void increase(){
        noOfBikes++;
    }
    
};
// int Bike::noOfBikes=10;
// void fun(){
//     static int a = 10;
//     cout<<a<<endl;
//     a++;
// }
int main(){
    Bike::noOfBikes=0;
    Bike tvs(100,150,"tvs");
    Bike::increase();
    Bike maruti(80,130,"maruti");
    Bike::increase();
    // // Bike::increase();
    cout<<Bike::noOfBikes<<endl;
    // // tvs.increase();
    // cout<<tvs.noOfBikes<<endl;
    // cout<<maruti.noOfBikes<<endl;
    // fun();
    // fun();
    // fun();
    
}