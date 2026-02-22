// Write a Program in C to find the Multiplication of two Matrixes.
#include <stdio.h>
int main()
{ // main function
    int r1, c1, r2, c2;
    printf("Enter number of rows of 1st matrix : "); // for printing
    scanf("%d", &r1); // taking input
    printf("Enter number of columns of 1st matrix : ");
    scanf("%d", &c1);
    printf("Enter number of rows of 2nd matrix : ");
    scanf("%d", &r2);
    printf("Enter number of columns of 2nd matrix : ");
    scanf("%d", &c2);
    if (c1 != r2)
    {
        printf("INVALID INPUT!\nNo. of rows of 1st matrix must be equal to that of columns of 2nd matrix.");
        return 0;
    }
    int a[r1][c1], b[r2][c2], res[r1][c2];
    printf("Enter elements of 1st matrix : \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix : \n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    // performing matrix multiplication
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Resultant Matrix : \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}