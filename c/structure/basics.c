#include <stdio.h>
int main(){
    typedef struct pokemon{
        int attack;
        char tier;
    } pokemon;
    typedef struct emp{
        int ecode;
        pokemon pikachu;
    } emp;
    emp e;
    e.ecode=34;
    printf("%d\n",e.ecode);
    e.pikachu.attack=30;
    e.pikachu.tier='B';
    e.ecode=4;
    return 0;
}