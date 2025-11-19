#include <iostream>
#include <string>
using namespace std;
class Player{
    private:
    // data member
    int health;
    int score;
    string name;
    public:
    // member functions
    // getter
    int getHealth(){
        return health;
    }
    int getScore(){
        return score;
    }
    string getName(){
        return name;
    }
    // setter
    void setHealth(int h){
        health=h;
    }
    void setScore(int s){
        score=s;
    }
    void setName(string n){
        name=n;
    }
};
int main(){
    Player dasp;
    dasp.setHealth(120);
    dasp.setScore(50);
    dasp.setName("Pritam Das");

    cout<<dasp.getHealth()<<endl;
    cout<<dasp.getName()<<endl;
    cout<<dasp.getScore()<<endl;
}