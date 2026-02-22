#include <stdio.h>
#include <string.h>
typedef union pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
}pokemon;
int main(){
    pokemon p;
    //pokemon* ptr=&p;
    p.hp=60;
    p.attack=70;
    p.speed=100;
    p.tier='A';
    strcpy(p.name,"Raichu");
    
    printf("%u\n",&p);
    printf("%u\n",&p.hp);
    printf("%u\n",&p.attack);
    printf("%u\n",&p.speed);
    printf("%u\n",&p.tier);
    printf("%u\n",&p.name);
    // printf("%u\n",&p.name[1]);
    // printf("%d\n",p.attack);
    // printf("%s\n",p.name);
    // strcpy(p.name,"Pikachu");
    // printf("%s\n",p.name);
    return 0;
}