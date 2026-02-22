// Any year is input through the keyboard. Write
// a program to determine whether the year is a leap
// year or not. (Considering leap year occurs after
// every 4 years)
#include <stdio.h>
int main()
{
    printf("Enter a year : ");
    int n;
    scanf("%d", &n);
    // if(n%4==0){ // (n%100==0 && n%400==0)||(n%100!=0 && n%4==0)
    //     printf("The year %d is leap year",n);
    // }
    // else{
    //         printf("The year %d is not leap year",n);
    // }
    printf((n % 100 == 0) ? ((n % 400 == 0) ? "Leap year" : "Not leap year") : ((n % 4 == 0) ? "Leap year" : "Not leap year"));
    return 0;
}
