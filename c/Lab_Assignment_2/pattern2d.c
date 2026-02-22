// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10
#include <stdio.h>
int main(){ // main function
    int c=1; // it's value is actually printed
    for(int i=1;i<=4;i++){ // for rows
        for(int j=1;j<=i;j++){ // for printing i number of no.s in each row(columns)
            printf("%d ",c);
            c++;
        }
        printf("\n"); // for next line
    }
    return 0;
}