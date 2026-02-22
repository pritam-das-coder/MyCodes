// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
#include <stdio.h>
int main() // main function
{ 
    for (int i = 1; i <= 5; i++) // for rows
    {                                
        for (int j = i; j >= 1; j--) // for printing no.s in decreasing order starting from row number to 1 in each row
            printf("%d ", j);
        printf("\n"); // for next line
    }
    return 0;
}