// Write a program in C to implement optimized bubble sort for a user input list (use array) 
// and show that in the best case one single pass is required. 
#include <stdio.h>
// Function to perform optimized Bubble Sort
void bubbleSort(float arr[], int n) {
    // Outer loop runs for passes (at most n-1 passes)
    for (int i = 1; i < n; i++) {
        printf("Pass %d : \n", i);
        int flag = 1;   // assume array is already sorted
        // Inner loop for comparisons in this pass
        for (int j = 0; j < n - i; j++) {
            // If adjacent elements are in wrong order, swap them
            if (arr[j] > arr[j + 1]) {
                flag = 0;   // swap happened → array was not sorted
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            // Print the array after each comparison/swapping step
            for (int i = 0; i < n; i++) 
                printf("%g ", arr[i]);
            printf("\n");
        }
        // If no swaps occurred in this pass → array is already sorted
        if (flag == 1) 
            break;  // stop early (optimized part)
    }
}
int main() {
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);   // input size of array
    float arr[n];      // declare array
    printf("Enter all the elements of array : ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);   // input array elements
    }
    // Call bubble sort function
    bubbleSort(arr, n);
    // Print sorted array
    printf("Sorted Array :\n");
    for (int i = 0; i < n; i++) 
        printf("%g ", arr[i]);
    return 0;
}
// Enter the size of array : 10
// Enter all the elements of array : 1 4 7 13 23 109 111 203 303 999
// Pass 1 : 
// 1 4 7 13 23 109 111 203 303 999 
// 1 4 7 13 23 109 111 203 303 999 
// 1 4 7 13 23 109 111 203 303 999 
// 1 4 7 13 23 109 111 203 303 999 
// 1 4 7 13 23 109 111 203 303 999 
// 1 4 7 13 23 109 111 203 303 999 
// 1 4 7 13 23 109 111 203 303 999 
// 1 4 7 13 23 109 111 203 303 999 
// 1 4 7 13 23 109 111 203 303 999 
// Sorted Array :
// 1 4 7 13 23 109 111 203 303 999
