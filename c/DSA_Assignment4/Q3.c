// Consider a hash table (use integer arrays) consisting of M= 11 slots, and suppose non-negative integer key values are hashed
// into the table using the hash function h1 ():
// int h1 (int key)
// {
//     int x=(key+7)*(key+7);
//     x = x / 16;
//     x = x + key;
//     x=x% 11;
//     return x;
// }
// Suppose that collisions are resolved by using Linear Probing. Show the final contents of the hash Table after the following key
// values have been inserted in the given order:43, 23, 1, 0,15,31,4,7,11,3
#include <stdio.h>
#include <limits.h>
int h1 (int key){
    int x=(key+7)*(key+7);
    x = x / 16;
    x = x + key;
    x=x% 11;
    return x;
}
int main(){
    int M=11;
    int hash_table[M];
    for(int i=0;i<M;i++) hash_table[i]=INT_MIN;

    int N=10;
    int keys[]={43,23,1,0,15,31,4,7,11,3};

    for(int i=0;i<N;i++){
        int probe=h1(keys[i]);
        while(hash_table[probe]!=INT_MIN){
            probe=(probe+1)%M;
        }
        hash_table[probe]=keys[i];
    }

    printf("Final Hash Table :\n");
    for(int i=0;i<M;i++)
        printf("%d\n",hash_table[i]);
    return 0;
}
