//    1
//   2 2
//  3 3 3
// 4 4 4 4
#include <stdio.h>
int main() // main function
{
    for (int i = 1; i <= 4; i++) // for rows
    {
        for (int j = 4 - i; j >= 1; j--) // for initial spaces
            printf(" ");
        for (int k = i; k >= 1; k--) // for numbers in each place
            printf("%d ", i);
        printf("\n"); // for next line after every row
    }
    return 0;
}