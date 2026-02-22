#include <stdio.h>
#include <string.h>
typedef struct Student{
    char stream[20];
    long long rollNo;
    char year[10];
    int age;
    char name[20];
    char grade;
} Student;
int main(){
    Student s1;
    strcpy(s1.stream,"CSE");
    s1.rollNo=10200124048;
    strcpy(s1.year,"1st");
    s1.age=19;
    strcpy(s1.name,"Pritam Das");
    s1.grade='O';
    
    printf("Student's Details -> \n");
    printf("Stream : %s\n",s1.stream);
    printf("Roll Number : %lld\n",s1.rollNo);
    printf("Year : %s\n",s1.year);
    printf("Age : %d\n",s1.age);
    printf("Name : %s\n",s1.name);
    printf("Grade : %c",s1.grade);
    
    return 0;
}