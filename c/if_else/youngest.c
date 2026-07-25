// If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to
// determine the youngest of the three.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter age of Ram : ");
    scanf("%d", &a);
    printf("Enter age of Shyam : ");
    scanf("%d", &b);
    printf("Enter age of Ajay : ");
    scanf("%d", &c);
    // if (a < b && a < c)
    // {
    //     printf("Ram is youngest");
    // }
    // else if (b < a && b < c)
    // {
    //     printf("Shyam is youngest");
    // }
    // else
    // {
    //     printf("Ajay is youngest");
    // }
    if(a<b){
        if(a<c)
        printf("Ram is youngest");
        else// c<a<b
        printf("Ajay is youngest");
    }
    else{ // a>b
        if(b<c)
        printf("Shyam is youngest");
        else// c<b<a
        printf("Ajay is youngest");
    }
    return 0;
}