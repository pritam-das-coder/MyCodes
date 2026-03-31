#include <stdio.h>
#include <time.h>

int main() {
    clock_t start = clock();

    // printf("Enter a positive integer : ");
    int n = 122;
    // scanf("%d",&n);
    printf((n>=100 && n<=999) ? "%d is a three digit number" : 
    "%d is not a three digit number",n);

    clock_t end = clock();
    double time_taken = (double)(end - start)/CLOCKS_PER_SEC;
    printf("Execution time: %f seconds\n", time_taken);
}
