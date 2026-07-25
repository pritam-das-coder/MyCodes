// Write a program in C to implement Heap sort for a user input list (use array).
#include <stdio.h>
// Function to heapify a subtree rooted at index i
void heapify(int arr[], int n, int i) {
    int largest = i;       // Initialize largest as root
    int left = 2 * i + 1;  // left child
    int right = 2 * i + 2; // right child
    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;
    // If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;
    // If largest is not root
    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        // Recursively heapify the affected subtree
        heapify(arr, n, largest);
    }
}
// Heap sort function
void heapSort(int arr[], int n) {
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    // Extract elements one by one from heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        // Call heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
// Function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Original array: ");
    printArray(arr, n);
    heapSort(arr, n);
    printf("Sorted array (Heap Sort): ");
    printArray(arr, n);
    return 0;
}
// Enter number of elements: 10
// Enter 10 elements: 23 41 -23 0 5 7 100 -299 12 -45
// Original array: 23 41 -23 0 5 7 100 -299 12 -45 
// Sorted array (Heap Sort): -299 -45 -23 0 5 7 12 23 41 100 

