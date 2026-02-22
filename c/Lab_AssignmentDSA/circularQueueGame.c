// There are n friends that are playing a game. The friends are sitting in a circle and are numbered from 1 to n in clockwise order. 
// More formally, moving clockwise from the ith friend brings you to the (i+1)th friend for 1 <= i < n, and moving clockwise 
// from the nth friend brings you to the 1st friend.
// The rules of the game are as follows:
// Start at the 1st friend.
// Count the next k friends in the clockwise direction including the friend you started at. The counting wraps around the circle and may count some friends more than once.
// The last friend you counted leaves the circle and loses the game.
// If there is still more than one friend in the circle, go back to step 2 starting from the friend immediately clockwise of the friend who just lost and repeat.
// Else, the last friend in the circle wins the game.
// Given the number of friends, n, and an integer k, return the winner of the game.
#include <stdio.h>
#include <stdlib.h> // For malloc, free, and exit

// Structure to represent a circular queue
typedef struct {
    int* items;     // Array to store queue elements
    int front;      // Index of the front element
    int rear;       // Index of the rear element
    int size;       // Current number of elements in the queue
    int capacity;   // Maximum capacity of the queue
} CircularQueue;

/**
 * @brief Creates and initializes a circular queue.
 * @param capacity The maximum number of elements the queue can hold.
 * @return A pointer to the newly created queue.
 */
CircularQueue* createQueue(int capacity) {
    CircularQueue* q = (CircularQueue*)malloc(sizeof(CircularQueue));
    if (!q) {
        perror("Failed to allocate memory for queue");
        exit(EXIT_FAILURE);
    }
    q->capacity = capacity;
    q->front = 0;
    q->rear = -1;
    q->size = 0;
    q->items = (int*)malloc(q->capacity * sizeof(int));
    if (!q->items) {
        perror("Failed to allocate memory for queue items");
        exit(EXIT_FAILURE);
    }
    return q;
}

/**
 * @brief Checks if the queue is empty.
 * @param q The queue to check.
 * @return 1 if empty, 0 otherwise.
 */
int isEmpty(CircularQueue* q) {
    return q->size == 0;
}

/**
 * @brief Checks if the queue is full.
 * @param q The queue to check.
 * @return 1 if full, 0 otherwise.
 */
int isFull(CircularQueue* q) {
    return q->size == q->capacity;
}

/**
 * @brief Adds an element to the rear of the queue.
 * @param q The queue.
 * @param value The integer value to add.
 */
void enqueue(CircularQueue* q, int value) {
    if (isFull(q)) {
        return; // Should not happen with the problem logic
    }
    q->rear = (q->rear + 1) % q->capacity;
    q->items[q->rear] = value;
    q->size++;
}

/**
 * @brief Removes and returns the element from the front of the queue.
 * @param q The queue.
 * @return The value of the dequeued element.
 */
int dequeue(CircularQueue* q) {
    if (isEmpty(q)) {
        return -1; // Should not happen with the problem logic
    }
    int item = q->items[q->front];
    q->front = (q->front + 1) % q->capacity;
    q->size--;
    return item;
}

/**
 * @brief Frees the memory allocated for the queue.
 * @param q The queue to free.
 */
void freeQueue(CircularQueue* q) {
    free(q->items);
    free(q);
}

/**
 * @brief Finds the winner of the circle game using a circular queue simulation.
 * @param n The total number of friends in the circle.
 * @param k The counting step.
 * @return The number of the friend who wins the game.
 */
int findTheWinner(int n, int k) {
    CircularQueue* q = createQueue(n);

    // Add all friends to the circle (queue).
    for (int i = 1; i <= n; i++) {
        enqueue(q, i);
    }

    // Continue until only one friend is left.
    while (q->size > 1) {
        // Move k-1 friends from the front to the back.
        for (int i = 0; i < k - 1; i++) {
            enqueue(q, dequeue(q));
        }
        // Remove the k-th friend.
        dequeue(q);
    }

    // The last person is the winner.
    int winner = dequeue(q);
    freeQueue(q); // Clean up memory
    return winner;
}

// Main function to get user input and run the simulation.
int main() {
    int n, k;

    // --- Get User Input for n (number of friends) ---
    printf("Enter the number of friends (n): ");
    // Loop until a valid positive integer is entered
    while (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input. Please enter a positive whole number for friends: ");
        // Clear the input buffer in case of non-integer input (e.g., 'a')
        while (getchar() != '\n');
    }

    // --- Get User Input for k (the count) ---
    printf("Enter the count number (k): ");
    // Loop until a valid positive integer is entered
    while (scanf("%d", &k) != 1 || k < 1) {
        printf("Invalid input. Please enter a positive whole number for the count: ");
        // Clear the input buffer
        while (getchar() != '\n');
    }

    // --- Find and Display the Winner ---
    int winner = findTheWinner(n, k);
    printf("\nGame Started: n = %d, k = %d\n", n, k);
    printf("The winner is friend number: %d\n", winner);

    return 0;
}
