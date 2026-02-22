#include <stdio.h>
#include <string.h>
typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
}pokemon;
void change(pokemon* ptr){
    //(*ptr).hp=80;
    ptr->hp=80;
    //(*ptr).attack=60;
    ptr->attack=60;
    //(*ptr).speed=110;
    ptr->speed=110;
    //(*ptr).tier='S';
    ptr->tier='S';
    //strcpy((*ptr).name,"Charizard");
    strcpy(ptr->name,"Charizard");
    return;
}
int main(){
    pokemon p={60,70,100};
    //p.hp=200;
    p.tier='A';
    strcpy(p.name,"Pikachu");
    pokemon* ptr=&p;
    // (*ptr).hp=70;
    // (*ptr).attack=50;
    // (*ptr).speed=100;
    // (*ptr).tier='A';
    //strcpy((*ptr).name,"Pikachu");
    printf("BEFORE CHANGE : \n");
    printf("%d\n",(*ptr).hp);
    printf("%d\n",(*ptr).attack);
    printf("%d\n",(*ptr).speed);
    printf("%c\n",(*ptr).tier);
    printf("%s\n",(*ptr).name);

    change(ptr);

    printf("AFTER CHANGE : \n");
    printf("%d\n",p.hp);
    printf("%d\n",p.attack);
    printf("%d\n",(*ptr).speed);
    printf("%c\n",(*ptr).tier);
    printf("%s\n",(*ptr).name);
    return 0;
}