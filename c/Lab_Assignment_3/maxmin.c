// Write a Program in C to check Maximum & Minimum Number in an Array.
#include <stdio.h>
int main() // main function
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n); // taking input
    int arr[n];
    printf("Enter elements of array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // taking input
    }
    int max = arr[0], min = arr[0]; // assume 1st element to be maximum & minimum
    // finding maximum & minimum element of array
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("The minimum element of array is %d", min);
    printf("\nThe maximum element of array is %d", max);
    return 0;
}