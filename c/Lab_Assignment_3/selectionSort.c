// Write a Program in C to Sort (Bubble, Insertion and Selection) the Number in an Array.
#include <stdio.h>
#include <stdbool.h>
int main()
{ // main function
    int n;
    printf("Enter size of array : "); // for printing
    scanf("%d", &n); // taking input
    int arr[n];
    printf("Enter all elements : "); // for printing
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // taking input
    }
    // selection sort
    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i], minidx = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                minidx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minidx];
        arr[minidx] = temp;
    }
    printf("Sorted Array :\n"); // for printing
    // print the array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // for printing
    }
    return 0;
}