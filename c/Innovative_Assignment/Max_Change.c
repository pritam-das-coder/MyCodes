#include <stdio.h>
int findMinCoins(int amount) {
    int denominations[] = {25, 20, 10, 5};
    int n = sizeof(denominations) / sizeof(denominations[0]);
    int coinCount = 0;
    
    for (int i = 0; i < n; i++) {
        int num_coins = amount / denominations[i];
        coinCount += num_coins;
        amount %= denominations[i];
    }
    return coinCount;
}

int findMaxCoins(int amount) {
    int smallestDenomination = 5;
    return amount / smallestDenomination;
}

int main() {
    
    int targetAmount = 180;
    int minCoins = findMinCoins(targetAmount);
    int maxCoins = findMaxCoins(targetAmount);
    printf("To make an amount of Rs %d:\n", targetAmount);
    printf("-> Minimum notes/coins required: %d\n", minCoins);
    printf("-> Maximum notes/coins required: %d\n", maxCoins);

    return 0;
}
