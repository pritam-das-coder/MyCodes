#include <iostream>
using namespace std;
class Gun{
    public:
    int ammo;
    int damage;
    int scope;
};
class Player{
    private:
    class Helmet{
        private:
        int hp;
        int level;

        public:
        int getHp(){
            return hp;
        }
        int getLevel(){
            return level;
        }

        void setHp(int hp){
            this->hp=hp;
        }
        void setLevel(int level){
            this->level=level;
        }
    };
    
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;

    public:
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    bool isAlive(){
        return alive;
    }
    Gun getGun(){
        return gun;
    }
    void getHelmet(){
        cout<<helmet.getHp()<<endl;
        cout<<helmet.getLevel()<<endl;
    }

    void setHealth(int health){
        this->health=health;
    }
    void setAge(int age){
        this->age=age;
    }
    void setScore(int score){
        this->score=score;
    }
    void setIsAlive(bool alive){
        this->alive=alive;
    }
    void setGun(Gun gun){
        this->gun=gun;
    }
    void setHelmet(int level){
        Helmet *helmet = new Helmet;
        helmet->setLevel(level);
        int hp;
        if(level == 1) hp=25;
        else if(level == 2) hp=50;
        else if(level == 3) hp=100;
        else cout<<"Error! Invalid Level"<<endl;
        helmet->setHp(hp);

        this->helmet=*helmet;
    }

};
int addScore(Player a,Player b){
    return a.getScore()+b.getScore();
}
Player getMaxScorePlayer(Player a,Player b){
    if(a.getScore() > b.getScore()) return a;
    else return b;
}
int main(){
    Gun akm;
    akm.ammo=40;
    akm.damage=100;
    akm.scope=10;

    Gun awm;
    awm.ammo=30;
    awm.damage=120;
    awm.scope=12;

    Player harsh; // static allocation
    harsh.setHealth(120);
    harsh.setAge(30);
    harsh.setScore(50);
    harsh.setIsAlive(true);
    harsh.setGun(akm);
    harsh.setHelmet(2);

    Player pritam; // static allocation
    pritam.setHealth(100);
    pritam.setAge(20);
    pritam.setScore(80);
    pritam.setIsAlive(true);
    pritam.setGun(awm);
    pritam.setHelmet(3);

    Player *urvi=new Player; // dynamic allocation
    //Player urviObj=*urvi;

    urvi->setAge(40);
    urvi->setHealth(100);
    urvi->setIsAlive(true);
    urvi->setScore(150);
    // cout<<urvi->getAge()<<endl;

    Gun g=harsh.getGun();
    // cout<<g.ammo<<endl;
    // cout<<g.damage<<endl;
    // cout<<g.scope<<endl;

    //pritam.getHelmet();    

    Player arr[] = {harsh,pritam,*urvi}; // array of objects
    cout<<arr[1].getAge()<<endl;
    cout<<arr[0].getAge()<<endl;
    cout<<arr[2].getAge()<<endl;

    // cout<<addScore(harsh,pritam)<<endl;
    // Player piku=getMaxScorePlayer(harsh,pritam);
    // cout<<piku.getAge()<<endl;
    // cout<<piku.getHealth()<<endl;

    // int *a;
    // a = new int(5);
    // cout<<*a<<endl;
    return 0;
}