// Write a Program in C to show the elements of a Matrix.
#include <stdio.h>
int main() // main function
{
    int r, c;
    printf("Enter number of rows : "); // for printing
    scanf("%d", &r); // taking input
    printf("Enter number of columns : "); // for printing
    scanf("%d", &c); // taking input
    int arr[r][c];
    printf("Enter all elements of matrix : "); // for printing
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]); // taking input
        }
    }
    printf("Given Matrix :\n"); // for printing
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]); // for printing
        }
        printf("\n"); // for printing
    }
    return 0;
}