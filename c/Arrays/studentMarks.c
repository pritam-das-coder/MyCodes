// Given an array of marks of 10 students, if the mark of any student is less than 35, print its roll number. 
// [Roll number here refers to the index of the array.]
#include <stdio.h>
int main(){
    // int m[10];
    // for(int i=0;i<10;i++){
    //     printf("Enter marks number %d : ",i+1);
    //     scanf("%d",&m[i]);
    // }
    // for(int i=0;i<=9;i++){
    //     if(m[i]<35)
    //         printf("%d ",i);
    // }
    int arr[5]={2,3,2,4,1};
    for(int i=0;i<5;i++)
        printf("%p\n",&arr[i]);
    return 0;
}