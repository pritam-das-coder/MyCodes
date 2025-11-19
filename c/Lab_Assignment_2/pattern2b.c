// * * * * 
//  * * * 
//   * * 
//    *
#include <stdio.h>
int main(){ // main function
    for(int i=1;i<=4;i++){ // for rows
        for(int j=1;j<=(i-1);j++) // for initial spaces
            printf(" ");
        for(int k=4;k>=i;k--) // for stars
            printf("* ");
        printf("\n"); // for next line
    }
    return 0;
}