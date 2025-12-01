// Write a program in C to implement a hashing scheme .
// Given a set of keys, a hash table size, and a hash function (like (k%10)),
// demonstrate how to insert the keys using different techniques (e.g., linear
// probing) and show the final state of the hash table.
// Example: Insert the keys 12, 18, 13, 2, 3, 23, 5, and 15 into a hash table
// of size 10 using h(k)= k mod 10 and linear probing.
// h(12)=12%10=2. Insert 12 at index 2.
// Continue this process for all keys.
#include <stdio.h>
int h(k){
    return k%10;
}
int main(){
    int hash_table[10];
    int keys[]={12,18,13,2,3,23,5,15};
    for(int i=0;i<8;i++){
        int idx=h(keys[i]);

    }
    return 0;
}