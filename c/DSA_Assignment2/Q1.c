// Write a program in C to implement bubble sort for a user input list (use array).  
// Print the required no. of passes and no. swapping operations.  
#include <stdio.h>
// Function to implement Bubble Sort
void bubbleSort(float arr[], int n) {
    int swapsNo = 0, passNo = 0;  // counters for swaps and passes
    // Outer loop for passes (total n-1 passes)
    for (int i = 1; i < n; i++) {
        passNo++;   // increment pass count
        printf("Pass %d : \n", i);
        // Inner loop for comparisons and swapping
        for (int j = 0; j < n - i; j++) {
            // If elements are in wrong order, swap them
            if (arr[j] > arr[j + 1]) {
                swapsNo++;  // increment swap count
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            // Print array after each comparison/swapping step
            for (int i = 0; i < n; i++) 
                printf("%g ", arr[i]);
            printf("\n");
        }
    }
    // Print total number of swaps and passes
    printf("No. of swaps required : %d\n", swapsNo);
    printf("No. of passes required : %d\n", passNo);
}
int main() {
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);   // input size of array
    float arr[n];      // declare array of size n
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
// Enter the size of array : 8
// Enter all the elements of array : 23 67 1 3 -23 45 0 102
// Pass 1 : 
// 23 67 1 3 -23 45 0 102
// 23 1 67 3 -23 45 0 102
// 23 1 3 67 -23 45 0 102
// 23 1 3 -23 67 45 0 102
// 23 1 3 -23 45 67 0 102
// 23 1 3 -23 45 0 67 102
// 23 1 3 -23 45 0 67 102
// Pass 2 : 
// 1 23 3 -23 45 0 67 102
// 1 3 23 -23 45 0 67 102
// 1 3 -23 23 45 0 67 102
// 1 3 -23 23 45 0 67 102
// 1 3 -23 23 0 45 67 102
// 1 3 -23 23 0 45 67 102
// Pass 3 :
// 1 3 -23 23 0 45 67 102
// 1 -23 3 23 0 45 67 102
// 1 -23 3 23 0 45 67 102
// 1 -23 3 0 23 45 67 102
// 1 -23 3 0 23 45 67 102
// Pass 4 :
// -23 1 3 0 23 45 67 102
// -23 1 3 0 23 45 67 102
// -23 1 0 3 23 45 67 102 
// -23 1 0 3 23 45 67 102
// Pass 5 :
// -23 1 0 3 23 45 67 102
// -23 0 1 3 23 45 67 102
// -23 0 1 3 23 45 67 102
// Pass 6 :
// -23 0 1 3 23 45 67 102
// -23 0 1 3 23 45 67 102
// Pass 7 :
// -23 0 1 3 23 45 67 102 
// No. of swaps required : 14
// No. of passes required : 7
// Sorted Array :
// -23 0 1 3 23 45 67 102