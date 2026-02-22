// Write a Program in C to Search an Element in an Array.
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
    int k;
    printf("Enter a number : ");
    scanf("%d", &k);
    bool flag = false; // assume k is absent
    // searching k in arr
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            flag = true;
            printf("%d found at index %d", k, i); // for printing
            break;
        }
    }
    if (flag == false)
        printf("%d not present in array", k); // for printing
    return 0;
}