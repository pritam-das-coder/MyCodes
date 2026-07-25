// Write a program in C to implement a hashing scheme .
// Given a set of keys, a hash table size, and a hash function (like (k%11)),
// demonstrate how to insert the keys using different techniques (e.g., linear
// probing) and show the final state of the hash table.
// Example: Insert the keys 12, 18, 33, 2, 3, 22, 5, and 15 into a hash table
// of size 11 using h(k)= k mod 11 and linear probing.
// h(12)=12%11=1. Insert 12 at index 1.
// Continue this process for all keys.
// Print the total no of collisions and load factor.
#include <stdio.h>
#include <limits.h>
int h(int k,int m){
    return k%m;
}
int main(){
    int m=11;
    int hash_table[m];

    for(int i=0;i<m;i++) hash_table[i]=INT_MIN;

    int n=8;
    int keys[]={12,18,13,2,3,22,5,15};

    int no_of_collision=0;
    for(int i=0;i<n;i++){
        int probe=h(keys[i],m);
        while(hash_table[probe]!=INT_MIN){
            no_of_collision++;
            probe=(probe+1)%m;
        }
        hash_table[probe]=keys[i];
    }

    printf("Final Hash Table :\n");
    for(int i=0;i<m;i++)
        printf("%d\n",hash_table[i]);
    
    printf("The total no of collisions is %d\n",no_of_collision);
    printf("Load Factor is %f\n",(n*1.0/m));
    return 0;
}