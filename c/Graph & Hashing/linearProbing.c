#include <stdio.h>
#include <limits.h>
int main(){
    int n=5;
    int keys[]={43,165,62,123,142};

    int m=10;
    int hash_table[m];

    for(int i=0;i<m;i++) hash_table[i]=INT_MIN;

    for(int i=0;i<n;i++){
        int probe=keys[i]%m;
        while(hash_table[probe]!=INT_MIN){
            probe=(probe+1)%m;
        }
        hash_table[probe]=keys[i];
    }

    for(int i=0;i<m;i++){
        printf("%d\n",hash_table[i]);
    }

    return 0;
}