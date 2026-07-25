// Create a structure to specify data on students with these attributes: Roll number, Name, Department, Course, 
// Year of joining. Create 2 structure variables. Now, create a function to check if two students have the same 
// Department. Pass the two structure variable as input to this function.
#include <stdio.h>
#include <string.h>
typedef struct Student{
    int rollNo;
    char name[15];
    char dept[20];
    char course[20];
    int yrOfJoin;
}Student;
void checkDept(Student a,Student b){
    if(strcmp(a.dept,b.dept)==0)
        printf("%s and %s have Same Department",a.name,b.name);
    else
        printf("%s and %s have Different Department",a.name,b.name);
    return;
}
int main(){
    Student a,b;

    a.rollNo=48;
    strcpy(a.name,"Pritam Das");
    strcpy(a.dept,"CSE");
    strcpy(a.course,"B.Tech");
    a.yrOfJoin=2024;

    b.rollNo=59;
    strcpy(b.name,"Sayandeep Saha");
    strcpy(b.dept,"CSE");
    strcpy(b.course,"B.Tech");
    b.yrOfJoin=2024;
    
    checkDept(a,b);
    return 0;
}