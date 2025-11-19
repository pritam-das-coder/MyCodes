// Create a class “cricketer” that contains name of cricketer, his age, number of test matches that he has played 
// and the average runs that he has scored in each test match. Create an array of data type “cricketer” to hold records of 20 
// such cricketers and then write a program to read these records.
#include <iostream>
#include <vector>
using namespace std;
class Cricketer{
    private:
    string name;
    int age;
    int noOfTests;
    float average;
    public:
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    int getNoOfTests(){
        return noOfTests;
    }
    float getAverage(){
        return average;
    }

    void setName(string name){
        this->name=name;
    }
    void setAge(int age){
        this->age=age;
    }
    void setNoOfTests(int noOfTests){
        this->noOfTests=noOfTests;
    }
    void setAverage(float average){
        this->average=average;
    }
};
int main(){
    int n=2;
    // Cricketer virat;
    // virat.setAge(38);
    // virat.setAverage(51);
    // virat.setName("Virat Kohli");
    // virat.setNoOfTests(201);

    // Cricketer bumrah;
    // bumrah.setAge(32);
    // bumrah.setAverage(9);
    // bumrah.setName("Jasprit Bumrah");
    // bumrah.setNoOfTests(102);

    // Cricketer arr[]={virat,bumrah};
    vector<Cricketer> players;

    for(int i=0;i<n;i++){
        Cricketer *c = new Cricketer;
        string name;
        cout<<"Enter name of cricketer "<<i+1<<" : ";
        cin>>name;
        int age;
        cout<<"Enter age of cricketer "<<i+1<<" : ";
        cin>>age;
        int noOfTests;
        cout<<"Enter number of test matches played by cricketer "<<i+1<<" : ";
        cin>>noOfTests;
        float average;
        cout<<"Enter average of cricketer "<<i+1<<" : ";
        cin>>average;

        c->setAge(age);
        c->setAverage(average);
        c->setName(name);
        c->setNoOfTests(noOfTests);

        players.push_back(*c);
    }

    for(int i=0;i<n;i++){
        cout<<players[i].getName()<<endl;
        cout<<players[i].getAge()<<endl;
        cout<<players[i].getAverage()<<endl;
        cout<<players[i].getNoOfTests()<<endl;
        cout<<endl;
    }
}