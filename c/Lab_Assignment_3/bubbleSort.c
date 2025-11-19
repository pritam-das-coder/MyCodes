// Write a Program in C to Sort (Bubble, Insertion and Selection) the Number in an Array.
#include <stdio.h>
#include <stdbool.h>
int main() // main function
{
    int n;
    printf("Enter size of array : "); // for printing
    scanf("%d", &n); // taking input
    int arr[n];
    printf("Enter all elements : "); // for printing
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // taking input
    }
    // bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true; // assume array sorted
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = false; // array was not sorted
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if (flag == true)
            break;
    }
    printf("Sorted Array :\n"); // for printing
    // print the array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // for printing
    }
    return 0;
}