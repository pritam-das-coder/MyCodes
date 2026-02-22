//    *
//   * *
//  * * *
// * * * *
#include <stdio.h>
int main() // main function
{
    for (int i = 1; i <= 4; i++) // for rows
    {
        for (int j = 4 - i; j > 0; j--) // for spaces
            printf(" ");
        for (int k = 1; k <= i; k++) // for stars
            printf("* ");
        printf("\n"); // for next line
    }
    return 0;
}