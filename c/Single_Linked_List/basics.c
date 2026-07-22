#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Student{
    char name[10];
    int roll;
}Student;
int main(){
    // Student s={"Pritam",48};
    // Student* ptr=&s;

    // printf("%s\n",ptr->name);
    // printf("%d",ptr->roll);
    // int *ptr=calloc(4,10);
    // int *temp=ptr;
    // for(int i=0;i<10;i++){
    //     *temp=i;
    //     temp++;
    // }
    // temp=ptr;
    // for(int i=0;i<10;i++){
    //     printf("%d ",*temp);
    //     temp++;
    // }
    // free(ptr);
    Student *ptr=malloc(sizeof(Student));
    strcpy(ptr->name,"Pritam");
    ptr->roll=48;
    printf("%s\n",ptr->name);
    printf("%d\n",ptr->roll);
    free(ptr);
}