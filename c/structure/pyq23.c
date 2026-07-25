#include <stdio.h>
#include <string.h>
typedef struct Student{
    char firstName[15];
    char lastName[15];
    int rNo;
    float marks[3];
}Student;
int main(){
    int n=2;
    Student arr[n];
    for(int i=0;i<n;i++){
        printf("Enter name of Student %d : ",i+1);
        scanf("%s",arr[i].firstName);
        scanf("%s",arr[i].lastName);
        printf("Enter roll no. of Student %d : ",i+1);
        scanf("%d",&arr[i].rNo);
        printf("Enter marks of Student %d : ",i+1);
        scanf("%f",&arr[i].marks[0]);
        scanf("%f",&arr[i].marks[1]);
        scanf("%f",&arr[i].marks[2]);
    }
    float avg[n];
    for(int i=0;i<n;i++){
        avg[i]=(arr[i].marks[0]+arr[i].marks[1]+arr[i].marks[2])/3.0;
    }
    for(int i=0;i<n;i++){
        printf("Student %d : \n",i+1);
        printf("Name : %s %s\n",arr[i].firstName,arr[i].lastName);
        printf("Roll No. : %d\n",arr[i].rNo);
        printf("Marks : %f %f %f\n",arr[i].marks[0]);
    }
    printf("Average Marks : %f\n",avg);
    return 0;
}