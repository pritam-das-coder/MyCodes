#include <stdio.h>
#include <stdlib.h> // For exit()

#define MAX_SIZE 5 // Define the maximum size of the circular queue

int queue[MAX_SIZE];
int front = -1, rear = -1;

// Function to check if the queue is full
int isFull() {
    return (front == 0 && rear == MAX_SIZE - 1) || (front == rear + 1);
}

// Function to check if the queue is empty
int isEmpty() {
    return front == -1;
}

// Function to insert an element into the circular queue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is Full! Cannot insert %d.\n", value);
    } else {
        if (front == -1) { // If queue was empty, set front and rear to 0
            front = 0;
            rear = 0;
        } else { // Move rear circularly
            rear = (rear + 1) % MAX_SIZE;
        }
        queue[rear] = value;
        printf("Inserted %d into the queue.\n", value);
    }
}

// Function to delete an element from the circular queue
void dequeue() {
    if (isEmpty()) {
        printf("Queue is Empty! Cannot delete.\n");
    } else {
        int deleted_value = queue[front];
        if (front == rear) { // If only one element was present
            front = -1;
            rear = -1;
        } else { // Move front circularly
            front = (front + 1) % MAX_SIZE;
        }
        printf("Deleted %d from the queue.\n", deleted_value);
    }
}

// Function to display the elements of the circular queue
void display() {
    if (isEmpty()) {
        printf("Queue is Empty!\n");
    } else {
        printf("Queue elements: ");
        int i = front;
        while (1) {
            printf("%d ", queue[i]);
            if (i == rear) {
                break;
            }
            i = (i + 1) % MAX_SIZE;
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    do {
        printf("\nCircular Queue Operations:\n");
        printf("1. Enqueue (Insert)\n");
        printf("2. Dequeue (Delete)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (1); // Loop indefinitely until user chooses to exit

    return 0;
}