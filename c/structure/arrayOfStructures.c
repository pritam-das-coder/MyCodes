#include <stdio.h>
#include <string.h>
int main(){
    typedef struct Pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    } Pokemon;

    Pokemon arr[3];

    arr[0].hp=50;
    arr[0].attack=70;
    arr[0].speed=100;
    arr[0].tier='B';
    strcpy(arr[0].name,"Pikachu");

    arr[1].hp=150;
    arr[1].attack=170;
    arr[1].speed=100;
    arr[1].tier='A';
    strcpy(arr[1].name,"Charizard");

    arr[2].hp=350;
    arr[2].attack=270;
    arr[2].speed=700;
    arr[2].tier='S';
    strcpy(arr[2].name,"Mewtwo");

    for(int i=0;i<3;i++){
        printf("%s\n",arr[i].name);
        printf("HP : %d\n",arr[i].hp);
        printf("Attack : %d\n",arr[i].attack);
        printf("Speed : %d\n",arr[i].speed);
        printf("Tier : %c\n",arr[i].tier);
    }

    return 0;
}