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
    // insertion sort
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j >= 1 && arr[j] < arr[j - 1])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    printf("Sorted Array :\n"); // for printing
    // print the array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // for printing
    }
    return 0;
}