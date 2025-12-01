// Consider a hash table (use integer arrays) consisting of M= 11 slots, and suppose nonnegative integer key values are hashed
// into the table using the hash function h1 ():
// int h1 (int key)
// {
//     int x=(key+7)*(key+7);
//     x = x / 16;
//     x = x + key;
//     X=X% 11;
//     return x;
// }
// Suppose that collisions are resolvedby using Linear Probing. Show the final contents of the hash Table after the following key
// values have been inserted in the given order:43, 23, 1, 0,15,31,4,7,11,3