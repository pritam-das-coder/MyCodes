// Insert the keys 12, 18, 33, 2, 3, 22, 5, and 15 into a hash table of size 11 using h(k)=
// k mod 11 and linear probing.Implement the idea of search for the user given input in
// this table considering collisions as well.
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
    int keys[]={12,18,33,2,3,22,5,15};

    for(int i=0;i<n;i++){
        int probe=h(keys[i],m);
        while(hash_table[probe]!=INT_MIN){
            probe=(probe+1)%m;
        }
        hash_table[probe]=keys[i];
    }

    printf("Final Hash Table :\n");
    for(int i=0;i<m;i++)
        printf("%d\n",hash_table[i]);
    
    int item;
    printf("Enter the key you want to search : ");
    scanf("%d",&item);

    int sidx=h(item,m);
    int probe=sidx;
    int flag=1;
    while(hash_table[probe]!=item){
        probe=(probe+1)%m;
        if(probe==sidx){
            flag=0;
            break;
        }
    }
    if(flag) printf("Given key found at index %d",probe);
    else printf("Given key not found");

    return 0;
}