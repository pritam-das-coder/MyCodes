// WAP to input week no. (1-7) & print day of week name using switch case
#include <stdio.h>
int main(){
    int n;
    printf("Enter day no. : ");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thrusday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid Input");
            break;
    }
    return 0;
}