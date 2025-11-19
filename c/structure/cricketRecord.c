// A record contains name of cricketer, his age, number of test matches that he 
// has played and the average runs that he has scored in each test match. 
// Create an array of structure to hold records of 20 such cricketer and then write a 
// program to read these records
#include <stdio.h>
#include <string.h>
int main(){
    typedef struct cricketer{
        char firstName[10];
        char lastName[10];
        int age;
        int noOfTest;
        float average;
    } cricketer;

    cricketer arr[2];

    for(int i=0;i<2;i++){
        printf("Enter name of cricketer %d : ",i+1);
        scanf("%s",arr[i].firstName);// don't use gets()
        scanf("%s",arr[i].lastName);
        printf("Enter age of cricketer %d : ",i+1);
        scanf("%d",&arr[i].age);
        printf("Enter number of test matches of cricketer %d : ",i+1);
        scanf("%d",&arr[i].noOfTest);
        printf("Enter average runs cricketer %d scored in each test match: ",i+1);
        scanf("%f",&arr[i].average);
    }
    for(int i=0;i<2;i++){
        printf("Name : %s %s\n",arr[i].firstName,arr[i].lastName);
        printf("Age : %d\n",arr[i].age);
        printf("Number of Test Matches : %d\n",arr[i].noOfTest);
        printf("Average : %f\n",arr[i].average);
    }
    return 0;
}