#include <stdio.h>

#define MAX_PILE_SIZE 100000

int main() {
    int pile[MAX_PILE_SIZE];
    int top = -1;

    int num_operations;
    scanf("%d", &num_operations);

    
    for (int i = 0; i < num_operations; ++i) {
        int op_num, action_id;
        scanf("%d %d", &op_num, &action_id);

    
        if (action_id == 1) {
            int score;
            scanf("%d", &score);
            // Check if there is space in the pile (stack isn't full).
            if (top < MAX_PILE_SIZE - 1) {
                top++; // Move the top pointer up
                pile[top] = score; // Place the new shirt on top
            }
        }
        // Action 2: Go party!
        else if (action_id == 2) {
            // Case 1: No good shirts in the pile.
            if (top == -1) {
                printf("%d -1\n", op_num);
                continue; // Move to the next operation
            }

            // Case 2: There are shirts in the pile. Find the best one.
            int max_score = -1;
            int best_shirt_index = -1;

            // Iterate through the pile from bottom to top to find the favorite shirt.
            // Using '>=' ensures that if multiple shirts have the same max score,
            // the one with the higher index (closer to the top) is chosen.
            // This minimizes the number of toppled shirts.
            for (int j = 0; j <= top; ++j) {
                if (pile[j] >= max_score) {
                    max_score = pile[j];
                    best_shirt_index = j;
                }
            }

            // Calculate how many shirts are on top of the chosen one.
            int toppled_count = top - best_shirt_index;

            // Print the result for this party operation.
            printf("%d %d\n", op_num, toppled_count);

            // Update the pile. The new top is the shirt just below the one taken.
            // This effectively removes the chosen shirt and all the toppled ones.
            top = best_shirt_index - 1;
        }
    }

    return 0;
}