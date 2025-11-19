#include <stdio.h>
int main(){
    struct Pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
    }charizard;

    struct Pokemon pikachu;
    pikachu.attack=60;
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.tier='A';

    charizard.attack=200;
    charizard.hp=100;
    charizard.speed=120;
    charizard.tier='A';

    printf("%c\n",charizard.tier);
    printf("%d\n",pikachu.hp);
    pikachu.hp=30;
    printf("%d\n",pikachu.hp);
    return 0;
}