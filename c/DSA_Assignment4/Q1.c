// Write a program in C to implement a hashing scheme . 
// Given a set of keys, a hash table size, and a hash function (like (k%10)), 
// demonstrate how to insert the keys using different techniques (e.g., linear 
// probing) and show the final state of the hash table. 
// Example: Insert the keys 12, 18, 13, 2, 3, 23, 5, and 15 into a hash table 
// of size 10 using h(k)= k mod 10 and linear probing. 
// h(12)=12%10=2. Insert 12 at index 2. 
// Continue this process for all keys. 
#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 10

#define EMPTY_SLOT 0

int hashTable[TABLE_SIZE];

int hashFunction(int key) {
    return key % TABLE_SIZE;
}

void displayHashTable() {
    printf("\n--- Current Hash Table State ---\n");
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (hashTable[i] == EMPTY_SLOT) {
            printf("| %02d: EMPTY | ", i);
        } else {
            printf("| %02d: %5d | ", i, hashTable[i]);
        }
        if ((i + 1) % 5 == 0){
            printf("\n");
        }
    }
    printf("--------------------------------\n");
}

void insertKey(int key) {
    int initialIndex = hashFunction(key);
    int currentIndex = initialIndex;
    int probeCount = 0;
    
    printf("\n--> Inserting Key: %d\n", key);
    printf("    Initial Hash Index: %d\n", initialIndex);

    while (probeCount < TABLE_SIZE) {
        if (hashTable[currentIndex] == EMPTY_SLOT) {
            hashTable[currentIndex] = key;
            printf("    Success: Key %d inserted at index %d (Probes: %d)\n", key, currentIndex, probeCount);
            
            displayHashTable();
            return;
        }

        if (probeCount == 0) {
            printf("    Collision at index %d. Initiating Linear Probing...\n", currentIndex);
        }
        
        probeCount++;
        currentIndex = (initialIndex + probeCount) % TABLE_SIZE;

        printf("    Probing attempt %d: Checking index %d...\n", probeCount, currentIndex);
    }
    
    printf("    Failure: Hash table is full. Could not insert key %d.\n", key);
}

int main() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = EMPTY_SLOT;
    }

    int keys[] = {12, 18, 13, 2, 3, 23, 5, 15};
    int numKeys = sizeof(keys) / sizeof(keys[0]);

    printf("Starting Hash Table Demonstration (Size: %d, Hash: k mod 10, Collision: Linear Probing)\n", TABLE_SIZE);
    
    displayHashTable();

    for (int i = 0; i < numKeys; i++) {
        insertKey(keys[i]);
    }

    printf("\n============================================\n");
    printf("Final State of the Hash Table after all insertions:\n");
    displayHashTable();
    printf("============================================\n");

    return 0;
}