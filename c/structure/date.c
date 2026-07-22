// Create a  structure ‘date’ that contains three members namely date, month and year. 
// Create 2 structure variables with different dates and now compare the two. If 
// the dates are equal then display message as "Equal" otherwise "Unequal".(can use flag)
// Now create another structure variable by assigning 
// the first date to it. Compare the first and third dates.
#include <stdio.h>
#include <string.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    } date;
    date arr[3];
    for(int i=0;i<2;i++){
        printf("Enter date %d in format dd mm yyyy : ",i+1);
        scanf("%d",&arr[i].day);
        scanf("%d",&arr[i].month);
        scanf("%d",&arr[i].year);
    }
    arr[2]=arr[0];
    // if(arr[0].day!=arr[1].day)
    //     printf("Unequal");
    // else if(arr[0].month!=arr[1].month)
    //     printf("Unequal");
    // else if(arr[0].year!=arr[1].year)
    //     printf("Unequal");
    // else
    //     printf("Equal");

    if(arr[0].day!=arr[2].day)
        printf("Unequal");
    else if(arr[0].month!=arr[2].month)
        printf("Unequal");
    else if(arr[0].year!=arr[2].year)
        printf("Unequal");
    else
        printf("Equal");

    return 0;
}