// Take input percentage of a student and
// print the Grade according to marks:
//  1) 91-100 Excellent
//  2) 81-90 Very Good
//  3) 71-80 Good
//  4) 61-70 Can do better
//  5) 51-60 Average
//  6) 41-50 Below Average
//  7) <=40 Fail
#include <stdio.h>
int main()
{
    printf("Enter percentage of a student : ");
    int p;
    scanf("%d", &p);
    if (p >= 91 && p <= 100)
        printf("Excellent");
    else if (p >= 81 && p <= 90)
        printf("Very Good");
    else if (p >= 71 && p <= 80)
        printf("Good");
    else if (p >= 61 && p <= 70)
        printf("Can do better");
    else if (p >= 51 && p <= 60)
        printf("Average");
    else if (p >= 41 && p <= 50)
        printf("Below Average");
    else
        printf("Fail");
    return 0;
}