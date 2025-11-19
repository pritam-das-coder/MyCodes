#include <stdio.h>
typedef struct Student{
    int age;
    float cgpa;
    char grade;
    char name[20];
} Student;
int main(){
    Student s1={19,8.29,'A',"Pritam Das"};
    Student* ptr=&s1;
    (*ptr).age=21;
    printf("%d\n",(*ptr).age);
    printf("%f\n",ptr->cgpa);
    printf("%c\n",ptr->grade);
    printf("%s",ptr->name);
    return 0;
}