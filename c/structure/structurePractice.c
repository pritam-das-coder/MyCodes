#include <stdio.h>
#include <string.h>
typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
}pokemon;
typedef struct legendaryPokemon{
    pokemon p;
    char ability[10];
} legendaryPokemon;
// void change(legendaryPokemon lp){
//     lp.p.hp=150;
//     lp.p.tier='X';
//     strcpy(lp.p.name,"Pritam");
//     return;
// }
void changeByPointer(legendaryPokemon* ptr){
    strcpy(ptr->ability,"Heavy Weight Lift");
    //(*ptr).p.hp=150;
    ptr->p.hp=150;
    //(*ptr).p.attack=250;
    ptr->p.attack=250;
    (*ptr).p.speed=400;
    (*ptr).p.tier='X';
    strcpy((*ptr).p.name,"Pritam");
    return;
}
int main(){
    // pokemon p,q;
    // p.hp=60;
    // p.attack=80;
    // p.speed=100;
    // p.tier='A';
    // strcpy(p.name,"Pikachu");
    // q=p;
    // strcpy(q.name,"Raichu");

    legendaryPokemon mewtwo;
    strcpy(mewtwo.ability,"Pressure");
    mewtwo.p.hp=110;
    mewtwo.p.attack=200;
    mewtwo.p.speed=300;
    mewtwo.p.tier='S';
    strcpy(mewtwo.p.name,"Mewtwo");

    printf("%s\n",mewtwo.ability);
    printf("%d\n",mewtwo.p.hp);
    printf("%d\n",mewtwo.p.attack);
    printf("%d\n",mewtwo.p.speed);
    printf("%c\n",mewtwo.p.tier);
    printf("%s\n",mewtwo.p.name);

    //change(mewtwo);//pass by value
    changeByPointer(&mewtwo);

    printf("%s\n",mewtwo.ability);
    printf("%d\n",mewtwo.p.hp);
    printf("%d\n",mewtwo.p.attack);
    printf("%d\n",mewtwo.p.speed);
    printf("%c\n",mewtwo.p.tier);
    printf("%s\n",mewtwo.p.name);
    // printf("%d\n",p.hp);
    // printf("%d\n",p.attack);
    // printf("%d\n",p.speed);
    // printf("%c\n",p.tier);
    // printf("%s\n",p.name);

    // printf("%d\n",q.hp);
    // printf("%d\n",q.attack);
    // printf("%d\n",q.speed);
    // printf("%c\n",q.tier);
    // printf("%s\n",q.name);

    
    // printf("%p\n",&p);
    // printf("%p\n",&q);
    return 0;
}