#include <stdio.h>
int main() {
    int choice, n, i;
    int numbers[1000]; /* Array to store numbers (assume a  
 				       maximum of 1000)  */  
    int count = 0;
    int total = 0;
    float average;
    int smallest, largest;
    while(1) {
        printf("\nMenu:\n");
        printf("1. Read numbers\n");
        printf("2. Calculate total\n");
        printf("3. Calculate average\n");
        printf("4. Display smallest number\n");
        printf("5. Display largest number\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &n);
                count = n;
                printf("Enter %d numbers:\n", n);
                for(i = 0; i < n; i++) {
                    scanf("%d", &numbers[i]);
                }
                break;
            case 2:
                total = 0;
                for(i = 0; i < count; i++) {
                    total += numbers[i];
                }
                printf("Total = %d\n", total);
                break;
            case 3:
                total = 0;
                for(i = 0; i < count; i++) {
                    total += numbers[i];
                }
                if(count != 0) {
                    average = (float)total / count;
                    printf("Average = %f\n", average);
                } else {
                    printf("No numbers entered.\n");
                }
                break;
            case 4:
                if(count > 0) {
                    smallest = numbers[0];
                    for(i = 1; i < count; i++) {
                        if(numbers[i] < smallest)
                            smallest = numbers[i];
                    }
                    printf("Smallest number = %d\n", smallest);
                } else {
                    printf("No numbers entered.\n");
                }
                break;
            case 5:
                if(count > 0) {
                    largest = numbers[0];
                    for(i = 1; i < count; i++) {
                        if(numbers[i] > largest)
                            largest = numbers[i];
                    }
                    printf("Largest number = %d\n", largest);
                } else {
                    printf("No numbers entered.\n");
                }
                break;
            case 6:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
