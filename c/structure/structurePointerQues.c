// Create a structure ‘person’ having attributes as age and weight. Access its structure variables using pointers.
#include <stdio.h>
typedef struct person{
    int age;
    float weight;
}person;
int main(){
    person a;
    a.age=22;
    a.weight=55.6;
    person* ptr=&a;
    printf("%d\n",(*ptr).age);
    printf("%f\n",(*ptr).weight);
    (*ptr).age=44;
    printf("%d\n",(*ptr).age);
    return 0;
}