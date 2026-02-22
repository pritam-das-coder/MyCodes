#include <stdio.h>
#include <string.h>
typedef struct Student{
    int age;
    float cgpa;
    char* name;
}Student;
int main(){
    Student s1;
    s1.age=19;
    s1.cgpa=8.67;
    strcpy(s1.name,"Pritam Das");
    printf("Age : %d\n",s1.age);
    printf("CGPA : %f\n",s1.cgpa);
    printf("Name : %s\n",s1.name);
    return 0;
}