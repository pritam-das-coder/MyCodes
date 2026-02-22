#include <stdio.h>
#include <string.h>
int main(){
    typedef struct pokemon{
        int attack;
        char name[15];
    }pokemon;
    pokemon a,b;
    a.attack=100;
    strcpy(a.name,"Charizard");
    printf("%s\n",a.name);
    b=a;
    strcpy(b.name,"Pikachu");
    printf("%s\n",b.name);
    return 0;
}