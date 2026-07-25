// Create a structure type ‘Person’ with name, salary and age as its attributes. Declare and initialize 2 
// variables for this. Print the name of first person and age of the other.
#include <stdio.h>
#include <string.h>
int main(){
    typedef struct Person{
        char name[50];
        int salary;
        int age;
    } Person;

    Person a;
    strcpy(a.name,"Pritam Das");
    a.salary=100000;
    a.age=19;

    Person b;
    strcpy(b.name,"Jain Singh");
    b.salary=80000;
    b.age=33;

    puts(a.name);
    printf("%d",b.age);

    return 0;
}