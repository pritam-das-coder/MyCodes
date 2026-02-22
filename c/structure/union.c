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
    strcpy(p.name,"Pikachu");
    
    p.attack=70;

    p.speed=100;
    p.hp=60;
    p.tier='A';
    printf("%d\n",p.hp);//60
    printf("%d\n",p.attack);//60
    printf("%d\n",p.speed);//60
    printf("%c\n",p.tier);//
    printf("%s\n",p.name);//P
    
    return 0;
}